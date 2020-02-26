/*N-Queens*/
class Solution
{
	public:
		vector<vector<string>> res;
		bool check(vector<string>& grid, int row, int col)
		{
			for (int i = 0;i < row;i++)
				if (grid[i][col] == 'Q')
					return false;
			for (int i = row - 1, j = col - 1;i >=0 && j >= 0;i--, j--)
				if (grid[i][j] == 'Q')
					return false;
			for (int i = row - 1, j = col + 1;i >= 0 && j < grid.size();i--, j++)
				if (grid[i][j] == 'Q')
					return false;
			return true;
		}
		void dfs(int index, vector<string>& grid)
		{
			if (index == grid.size())
			{
				res.push_back(grid);
				return;
			}
			for (int i = 0;i < grid.size();i++)
				if (check(grid, index, i))
				{
					grid[index][i] = 'Q';
					dfs(index + 1, grid);
					grid[index][i] = '.';
				}
		}
		vector<vector<string>> solveNQueens(int n)
		{
			vector<string> grid(n, string(n, '.'));
			dfs(0, grid);
			return res;
		}
};