/*Subsets II*/
class Solution
{
	public:
		vector<vector<int>> res;
		vector<int> subset;
		void dfs(int index, vector<int>& nums)
		{
			if (index == nums.size())
			{
				res.push_back(subset);
				return;
			}
			subset.push_back(nums[index]);
			dfs(index + 1, nums);
			subset.pop_back();
			while (index + 1 < nums.size() && nums[index] == nums[index + 1])
				index++;
			dfs(index + 1, nums);
		}
		vector<vector<int>> subsetsWithDup(vector<int>& nums)
		{
			sort(nums.begin(), nums.end());
			dfs(0, nums);
			return res;
		}
};