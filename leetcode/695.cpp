/*Max Area of Island*/
class Solution
{
	public:
		int direction[4][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
		int dfs(vector<vector<int>>& grid, int i, int j)
		{
			if (i < 0 || j < 0 || i >= grid.size() || j >= grid[i].size() || !grid[i][j])
				return 0;
			grid[i][j] = 0;
			int area = 1;
			for (auto d : direction)
				area += dfs(grid, i + d[0], j + d[1]);
			return area;
		}
		int maxAreaOfIsland(vector<vector<int>>& grid)
		{
			int res = 0;
			for (int i = 0;i < grid.size();i++)
				for (int j = 0;j < grid[i].size();j++)
					if (grid[i][j])
						res = max(res, dfs(grid, i, j));
			return res;
		}
};