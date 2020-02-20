/*Longest Repeating Character Replacement*/
class Solution
{
	public:
		int characterReplacement(string s, int k)
		{
			vector<int> count(26, 0);
			int res = 0, maxn = 0;
			for (int i = 0, j = 0;j < s.size();j++)
			{
				count[s[j] - 'A']++;
				maxn = max(maxn, count[s[j] - 'A']);
				while (j - i + 1 > maxn + k)
					count[s[i++] - 'A']--;
				res = max(res, j - i + 1);
			}
			return res;
        }
};