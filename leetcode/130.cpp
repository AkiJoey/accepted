/*Surrounded Regions*/
class Solution
{
	public:
		int direction[4][2] = {{ 0, 1 }, { 0, -1 }, { 1, 0 }, { -1, 0 }};
		void dfs(vector<vector<char>>& board, int i, int j)
		{
			if (i < 0 || j < 0 || i >= board.size() || j >= board[i].size() || board[i][j] == 'X' || board[i][j] == '#')
				return;
			board[i][j] = '#';
			for (auto d : direction)
				dfs(board, i + d[0], j + d[1]);
		}
		void solve(vector<vector<char>>& board)
		{
			for (int i = 0;i < board.size();i++)
				for (int j = 0;j < board[0].size();j++)
					if (board[i][j] == 'O' && (!i || !j || i == board.size() - 1 || j == board[0].size() - 1))
						dfs(board, i, j);
			for (int i = 0;i < board.size();i++)
				for (int j = 0;j < board[0].size();j++)
					if (board[i][j] == 'O')
						board[i][j] = 'X';
					else if (board[i][j] == '#')
						board[i][j] = 'O';
		}
};