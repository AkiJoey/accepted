/*Combination Sum III*/
class Solution
{
	public:
		vector<vector<int>> res;
		vector<int> candidate;
		void dfs(int index, int k, int n)
		{
			if (!n && candidate.size() == k)
			{
				res.push_back(candidate);
				return;
			}
			for (int i = index;i < 10;i++)
				if (n >= i)
				{
					candidate.push_back(i);
					dfs(i + 1, k, n - i);
					candidate.pop_back();
				}
		}
		vector<vector<int>> combinationSum3(int k, int n)
		{
			dfs(1, k, n);
			return res;
		}
};