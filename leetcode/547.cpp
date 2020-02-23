/*Friend Circles*/
class Solution
{
	public:
		vector<int> parent;
		int find(int v)
		{
			return parent[v] = parent[v] == v ? v : find(parent[v]);
		}
		bool unite(int x, int y)
		{
			int a = find(x), b = find(y);
			if (a != b)
			{
				parent[a] = b;
				return true;
			}
			return false;
		}
		int findCircleNum(vector<vector<int>>& M)
		{
			int n = M.size(), res = n;
			for (int i = 0;i < n;i++)
				parent.push_back(i);
			for (int i = 0;i < n;i++)
				for (int j = i + 1;j < n;j++)
					if (M[i][j] && unite(i, j))
						res--;
			return res;
		}
};