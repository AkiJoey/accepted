/*Combination Sum*/
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
				if (target >= candidates[i])
				{
					candidate.push_back(candidates[i]);
					dfs(i, target - candidates[i], candidates);
					candidate.pop_back();
				}
		}
		vector<vector<int>> combinationSum(vector<int>& candidates, int target)
		{
			dfs(0, target, candidates);
			return res;
		}
};