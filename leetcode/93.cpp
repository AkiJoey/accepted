/*Restore IP Addresses*/
class Solution
{
	public:
		vector<string> res;
		void dfs(int index, string ip, string s)
		{
			if (index == 4)
			{
				if (s.empty())
					res.push_back(ip);
				return;
			}
			for (int i = 1;i < 4;i++)
			{
				if (s.size() < i)
					break;
				int paragraph = stoi(s.substr(0, i));
				if (paragraph > 255 || i != to_string(paragraph).size())
					continue;
				dfs(index + 1, ip + s.substr(0, i) + (index == 3 ? "" : "."), s.substr(i));
			}
		}
		vector<string> restoreIpAddresses(string s)
		{
			dfs(0, "", s);
			return res;
		}
};