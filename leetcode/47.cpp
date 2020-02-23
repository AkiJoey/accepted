/*Permutations II*/
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
				if (i != index && nums[i] == nums[index])
					continue;
				swap(nums[i], nums[index]);
				dfs(index + 1, nums);
			}
		}
		vector<vector<int>> permuteUnique(vector<int>& nums)
		{
			sort(nums.begin(), nums.end());
			dfs(0, nums);
			return res;
		}
};