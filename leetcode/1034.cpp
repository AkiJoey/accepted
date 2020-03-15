/*Coloring A Border*/
class Solution
{
	public:
		int direction[4][2] = {{ 0, 1 }, { 0, -1 }, { 1, 0 }, { -1, 0 }};
		void dfs(vector<vector<int>>& grid, int i, int j, int color)
		{
			if (i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size() || grid[i][j] != color)
				return;
			grid[i][j] *= -1;
			for (auto d : direction)
				dfs(grid, i + d[0], j + d[1], color);
			if (i > 0 && i < grid.size() - 1 && j > 0 && j < grid[0].size() - 1)
				if (color == abs(grid[i - 1][j]) && color == abs(grid[i + 1][j]) && color == abs(grid[i][j - 1]) && color == abs(grid[i][j + 1]))
					grid[i][j] *= -1;
		}
		vector<vector<int>> colorBorder(vector<vector<int>>& grid, int r0, int c0, int color)
		{
			dfs(grid, r0, c0, grid[r0][c0]);
			for (int i = 0;i < grid.size();i++)
				for (int j = 0;j < grid[0].size();j++)
					grid[i][j] = grid[i][j] < 0 ? color : grid[i][j];
			return grid;
		}
};