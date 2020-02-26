/*Permutation Sequence*/
class Solution
{
	public:
		string getPermutation(int n, int k)
		{
			string res;
			string nums = "123456789";
			int factorial[] = { 1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880, 3628800 };
			k--;
			while (n)
			{
				int i = k / factorial[n - 1];
				k %= factorial[n-- - 1];
				res.push_back(nums[i]);
				nums.erase(i, 1);
			}
			return res;
		}
};