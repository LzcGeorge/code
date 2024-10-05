#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    std::ios::sync_with_stdio(0),std::cin.tie(0);

	int n,m;
	cin >> n >> m;
	vector<vector<int>> g(n);
	for(int i = 0; i < m; i ++) {
		int x,y;
		cin >> x >> y;
		x --, y --;
		g[x].push_back(y);
	}

	vector<int> f(n,-1);
	auto dp = [&](auto self,int x) -> int {
		if(f[x] != -1) return f[x];
		
		int res = 0;
		for(auto v: g[x])
			res = max(res,self(self,v) + 1);
		return f[x] = res;
	};

	int mx = 0;
	for(int i = 0; i < n; i ++)
		mx = max(mx,dp(dp,i));
	cout << mx << "\n";
	return 0;
}