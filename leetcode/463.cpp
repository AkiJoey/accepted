/*Island Perimeter*/
class Solution
{
	public:
		int islandPerimeter(vector<vector<int>>& grid)
		{
			int res = 0;
			for (int i = 0;i < grid.size();i++)
				for (int j = 0;j < grid[i].size();j++)
					if (grid[i][j])
					{
						res += 4;
						if (i && grid[i - 1][j])
							res -= 2;
						if (j && grid[i][j - 1])
							res -= 2;
					}
			return res;
		}
};