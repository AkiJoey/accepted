/*Letter Combinations of a Phone Number*/
class Solution
{
	public:
		vector<string> res;
		string map[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
		void dfs(int index, string s, string& digits)
		{
			if (index == digits.size())
			{
				res.push_back(s);
				return;
			}
			for (auto c : map[digits[index] - '0'])
				dfs(index + 1, s + c, digits);
		}
		vector<string> letterCombinations(string digits)
		{
			if (!digits.size())
				return res;
			dfs(0, "", digits);
			return res;
		}
};