/*Subarray Product Less Than K*/
class Solution
{
	public:
		int numSubarrayProductLessThanK(vector<int>& nums, int k)
		{
			if (k <= 1)
				return 0;
			int res = 0, pro = 1;
			for (int i = 0, j = 0;j < nums.size();j++)
			{
				pro *= nums[j];
				while (pro >= k)
					pro /= nums[i++];
				res += j - i + 1;
			}
			return res;
        }
};