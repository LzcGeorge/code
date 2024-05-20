#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// 答案/构造 是从样例中推出来的，不是猜出来的

void solve()
{
	unordered_map<int,ll> mp;
	int n,m;
	cin >> n >> m;

	for(int i = 1; i <= n; i ++) {
		int x;
		cin >> x;
		mp[x] += i;
	}
	for(int i = 0; i < m; i ++) {
		int x,y;
		cin >> x >> y;
		ll res = 0ll;
		cout << 1ll * mp[x] * mp[y] << "\n";
	}
}

int main()
{
    std::ios::sync_with_stdio(0),std::cin.tie(0);
    
    solve();
}