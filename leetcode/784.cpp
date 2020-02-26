/*Letter Case Permutation*/
class Solution
{
	public:
		vector<string> res;
		void dfs(int index, string s, string& S)
		{
			if (index == S.size())
			{
				res.push_back(s);
				return;
			}
			char c = S[index];
			dfs(index + 1, s + c, S);
			if (isalpha(c))
			{
				c = S[index] ^ 1 << 5;
				dfs(index + 1, s + c, S);
			}
		}
		vector<string> letterCasePermutation(string S)
		{
			dfs(0, "", S);
			return res;
		}
};