/*Smallest Sufficient Team*/
class Solution
{
	public:
		vector<int> smallestSufficientTeam(vector<string>& req_skills, vector<vector<string>>& people)
		{
			unordered_map<string, int> map;
			vector<int> res, team, man(people.size(), 0);
			for (int i = 0;i < req_skills.size();i++)
				map[req_skills[i]] = i;
			for (int i = 0;i < people.size();i++)
				for (int j = 0;j < people[i].size();j++)
					man[i] |= 1 << map[people[i][j]];
			dfs(0, req_skills.size(), man, team, res);
			return res;
		}
		void dfs(int index, int len, vector<int>& man, vector<int>& team, vector<int>& res)
		{
			if (index == (1 << len) - 1)
			{
				if (!res.size() || team.size() < res.size())
					res = team;
				return;
			}
			if (res.size() && team.size() >= res.size())
				return;
			int skill = 0;
			while (((index >> skill) & 1) == 1)
				skill++;
			for (int i = 0;i < man.size();i++)
				if (((man[i] >> skill) & 1) == 1)
				{
					team.push_back(i);
					dfs(index | man[i], len, man, team, res);
					team.pop_back();
				}
		}
};