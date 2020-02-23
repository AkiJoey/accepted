/*Generate Parentheses*/
class Solution
{
	public:
		vector<string> res;
		void dfs(int l, int r, string s, int n)
		{
			if (l == n && r == n)
				res.push_back(s);
			if (l > r)
				dfs(l, r + 1, s + ')', n);
			if (l < n)
				dfs(l + 1, r, s + '(', n);
		}
		vector<string> generateParenthesis(int n)
		{
			dfs(0, 0, "", n);
			return res;
		}
};