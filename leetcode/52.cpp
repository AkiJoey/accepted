/*N-Queens II*/
class Solution
{
	public:
		int res = 0;
		void dfs(int index, int col, int hill, int dale, int n)
		{
			if (index == n)
			{
				res++;
				return;
			}
			for (int i = 0;i < n;i++)
				if (!(col >> i & 1) && !(hill >> index + i & 1) && !(dale >> index - i + n & 1))
					dfs(index + 1, col | 1 << i, hill | 1 << index + i, dale | 1 << index - i + n, n);
		}
		int totalNQueens(int n)
		{
			dfs(0, 0, 0, 0, n);
			return res;
		}
};