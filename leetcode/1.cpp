/*Two Sum*/
class Solution
{
	public:
		vector<int> twoSum(vector<int>& nums, int target)
		{
			map<int, int> map;
			vector<int> res;
			for (int i = 0;i < nums.size();i++)
			{
				if (map.find(target - nums[i]) != map.end())
				{
					res.push_back(map[target - nums[i]]);
					res.push_back(i);
					return res;
				}
				else
					map[nums[i]] = i;
			}
			return res;
        }
};