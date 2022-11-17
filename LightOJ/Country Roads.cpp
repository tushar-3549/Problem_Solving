// https://lightoj.com/problem/country-roads

#include <bits/stdc++.h>

#define       endl       '\n'
#define       ll         long long int 
#define       pb         push_back
#define       inf        2000000000

const         int N      = 1e5+10;
const         int INF    = 1e9+10;

using namespace std;

vector< pair <int,int> > adj[N];
vector<int> dist(N, INF);

void dijkstra(int s, int n)
{
	vector<int> vis(N, 0);
	set < pair <int, int> > st;
	st.insert({0, s});
	dist[s] = 0;
	while(st.size() > 0)
	{
		auto node = *st.begin();
		int v = node.second;
		int d = node.first;
		st.erase(*st.begin());
		if(vis[v])
			continue;
		vis[v] = 1;
		for(auto child: adj[v])
		{
			int child_v = child.first;
			int wt = child.second;
			//int new_dis = dist[v] + wt;
			int new_dis = max(dist[v], wt);
			if(new_dis < dist[child_v])
			{
				dist[child_v] = new_dis;
			    st.insert({dist[child_v], child_v});
			}
		}
	}
}
int main()
{
	int tc;
	cin >> tc;
	for(int i = 1; i <= tc; i++)
	{
		int n, e;
		cin >> n >> e;
		for (int i = 0; i < n; i++) 
		{
			adj[i].clear();
			dist[i] = inf;
		}
		while(e--)
		{
			int u, v, w;
			cin >> u >> v >> w;
		    adj[u].pb({v, w});
		    adj[v].pb({u, w});
		}
		int t;
		cin >> t;
		dijkstra(t, n);

		cout << "Case " << i << ":" << endl;
		for(int i = 0; i < n; i++)
		{
			if(dist[i] == inf)
				cout << "Impossible\n";
			else 
				cout << dist[i] << endl;
		}

	}
	return 0;
}

