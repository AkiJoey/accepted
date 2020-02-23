/*Permutations*/
class Solution
{
	public:
		vector<vector<int>> res;
		void dfs(int index, vector<int> nums)
		{
			if (index == nums.size())
				res.push_back(nums);
			for (int i = index;i < nums.size();i++)
			{
				swap(nums[i], nums[index]);
				dfs(index + 1, nums);
			}
		}
		vector<vector<int>> permute(vector<int>& nums)
		{
			dfs(0, nums);
			return res;
		}
};