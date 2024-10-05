#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    std::ios::sync_with_stdio(0),std::cin.tie(0);

	int n,k;
	cin >> n >> k;
	vector<int> v(k);
	for(auto& x: v) cin >> x;

	vector<ll> f(n + 1,-1);
	const ll mod = 1e9 + 7;

	auto dp = [&](auto self,int x) -> ll{
		if(f[x] != -1) return f[x];
		if(x == 1) return f[x] = 1;
		int res = 0;
		for(int j: v) 
			if(x - j >= 0)
				res = (res + self(self,x - j)) % mod;
		return f[x] = res;
	};

	cout << dp(dp,n) << "\n";
	return 0;
}