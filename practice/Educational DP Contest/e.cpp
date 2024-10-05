#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    std::ios::sync_with_stdio(0),std::cin.tie(0);

	int n,w;
	cin >> n >> w;
	vector<ll> W(n+1),V(n+1);
	int v = 1e5;
	vector<ll> f(v + 1,0x3f3f3f3f);
	for(int i = 1; i <= n;i ++)
		cin >> W[i] >> V[i];

	// 价值为 j 的背包最小体积
	f[0] = 0;
	for(int i = 1; i <= n; i ++)
		for(int j = v; j >= V[i]; j --)
			f[j] = min(f[j],f[j - V[i]] + W[i]);

	for(int j = v; j >= 0; j --) 
		if(f[j] <= w)
		{
			cout << j << "\n";
			return 0;
		}
	return 0;
}