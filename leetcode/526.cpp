/*Beautiful Arrangement*/
class Solution
{
	public:
		int res = 0;
		void dfs(int index, vector<bool>& vis)
		{
			if (!index)
			{
				res++;
				return;
			}
			for (int i = 1;i <= vis.size();i++)
				if (!vis[i] && (!(index % i) || !(i % index)))
				{
					vis[i] = true;
					dfs(index - 1, vis);
					vis[i] = false;
				}
		}
		int countArrangement(int N)
		{
			vector<bool> vis(N, false);
			dfs(N, vis);
			return res;
		}
};