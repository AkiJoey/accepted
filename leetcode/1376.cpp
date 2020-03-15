/*Time Needed to Inform All Employees*/
class Solution
{
	public:
		int dfs(int index, int headID, vector<int>& manager, vector<int>& informTime, vector<int>& time)
		{
			if (index == headID)
				return 0;
			if (time[index] > 0)
				return time[index];
			time[index] = dfs(manager[index], headID, manager, informTime, time) + informTime[manager[index]];
			return time[index];
		}
		int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime)
		{
			int res = 0;
			vector<int> time(n, 0);
			for (int i = 0;i < n;i++)
				res = max(res, dfs(i, headID, manager, informTime, time));
			return res;
		}
};