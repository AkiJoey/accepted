/*Sliding Window Maximum*/
class Solution
{
	public:
		vector<int> maxSlidingWindow(vector<int>& nums, int k)
		{
			vector<int> res;
			deque<int> que;
			for (int i = 0;i < nums.size();i++)
			{
				while (!que.empty() && nums[i] >= nums[que.back()])
					que.pop_back();
				que.push_back(i);
				if (que.front() <= i - k)
						que.pop_front();
				if (i + 1 >= k)
					res.push_back(nums[que.front()]);
			}
			return res;
		}
};