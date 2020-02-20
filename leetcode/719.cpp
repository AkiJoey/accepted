/*Find K-th Smallest Pair Distance*/
class Solution
{
	public:
		int count(vector<int>& nums, int mid)
		{
			int res = 0;
			for (int i = 0, j = 0;j < nums.size();j++)
			{
				while (nums[j] - nums[i] > mid)
					i++;
				res += j - i;
			}
			return res;
		}
		int smallestDistancePair(vector<int>& nums, int k)
		{
			sort(nums.begin(), nums.end());
			int l = 0, r = nums.back() - nums[0];
			while (l < r)
			{
				int mid = (l + r) / 2;
				if (count(nums, mid) >= k)
					r = mid;
				else
					l = mid + 1;
			}
			return l;
		}
};