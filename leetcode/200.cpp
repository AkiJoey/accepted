/*Number of Islands*/
class Solution
{
	public:
		int direction[4][2] = {{ 0, 1 }, { 0, -1 }, { 1, 0 }, { -1, 0 }};
		void dfs(vector<vector<char>>& grid, int i, int j)
		{
			if (i < 0 || j < 0 || i >= grid.size() || j >= grid[i].size() || grid[i][j] == '0')
				return;
			grid[i][j] = '0';
			for (auto d : direction)
				dfs(grid, i + d[0], j + d[1]);
		}
		int numIslands(vector<vector<char>>& grid)
		{
			int res = 0;
			for (int i = 0;i < grid.size();i++)
				for (int j = 0;j < grid[i].size();j++)
					if (grid[i][j] == '1')
					{
						dfs(grid, i, j);
						res++;
					}
			return res;
		}
};