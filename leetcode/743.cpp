/*Network Delay Time*/
#define INF 0x3f3f3f3f
class Solution
{
	public:
		int networkDelayTime(vector<vector<int>>& times, int N, int K)
		{
			int res = 0;
			bool loop = true;
			vector<int> dis(N + 1, INF);
			dis[K] = 0;
			for (int i = 1;i < N;i++)
			{
				loop = false;
				for (int j = 0;j < times.size();j++)
					if (dis[times[j][0]] != INF)
						if (dis[times[j][0]] + times[j][2] < dis[times[j][1]])
						{
							dis[times[j][1]] = dis[times[j][0]] + times[j][2];
							loop = true;
						}
				if (!loop)
					break;
			}
			for (int i = 1;i <= N;i++)
				if (dis[i] == INF)
					return -1;
				else if (dis[i] > res)
					res = dis[i];
			return res;
		}
};