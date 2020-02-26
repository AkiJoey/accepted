/*Combination Sum II*/
class Solution
{
	public:
		vector<vector<int>> res;
		vector<int> candidate;
		void dfs(int index, int target, vector<int>& candidates)
		{
			if (!target)
			{
				res.push_back(candidate);
				return;
			}
			for (int i = index;i < candidates.size();i++)
			{
				if (target < candidates[i])
					break;
				if (i > index && candidates[i] == candidates[i - 1])
					continue;
				candidate.push_back(candidates[i]);
				dfs(i + 1, target - candidates[i], candidates);
				candidate.pop_back();
			}
		}
		vector<vector<int>> combinationSum2(vector<int>& candidates, int target)
		{
			sort(candidates.begin(), candidates.end());
			dfs(0, target, candidates);
			return res;
		}
};