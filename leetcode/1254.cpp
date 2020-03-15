/*Number of Closed Islands*/
class Solution
{
	public:
		int direction[4][2] = {{ 0, 1 }, { 0, -1 }, { 1, 0 }, { -1, 0 }};
		int dfs(vector<vector<int>>& grid, int i, int j)
		{
			if (i < 0 || j < 0 || i >= grid.size() || j >= grid[i].size())
				return 0;
			if (grid[i][j])
				return 1;
			grid[i][j] = 1;
			int num = 1;
			for (auto d : direction)
				num *= dfs(grid, i + d[0], j + d[1]);
			return num;
		}
		int closedIsland(vector<vector<int>>& grid)
		{
			int res = 0;
			for (int i = 0;i < grid.size();i++)
				for (int j = 0;j < grid[i].size();j++)
					if (grid[i][j] == 0)
						res += dfs(grid, i, j);
			return res;
		}
};