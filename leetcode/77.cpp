/*Combinations*/
class Solution
{
	public:
		vector<vector<int>> res;
		vector<int> combination;
		void dfs(int index, int n, int k)
		{
			if (combination.size() == k)
			{
				res.push_back(combination);
				return;
			}
			for (int i = index;i <= n - k + combination.size() + 1;i++)
			{
				combination.push_back(i);
				dfs(i + 1, n, k);
				combination.pop_back();
			}
		}
		vector<vector<int>> combine(int n, int k)
		{
			dfs(1, n, k);
			return res;
		}
};