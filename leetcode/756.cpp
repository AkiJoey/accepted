/*Pyramid Transition Matrix*/
class Solution
{
	public:
		unordered_map<string, vector<char>> map;
		bool dfs(int index, string current, string bottom)
		{
			if (bottom.size() == 1)
				return true;
			if (index == bottom.size() - 1)
				return dfs(0, "", current);
			for (char c : map[bottom.substr(index, 2)])
				if (dfs(index + 1, current + c, bottom))
					return true;
			return false;
		}
		bool pyramidTransition(string bottom, vector<string>& allowed)
		{
			for(string& s: allowed)
				map[s.substr(0, 2)].push_back(s[2]);
			return dfs(0, "", bottom);
		}
};