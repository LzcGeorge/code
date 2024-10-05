#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    std::ios::sync_with_stdio(0),std::cin.tie(0);

	int n,m;
	cin >> n >> m;
	vector<string> g(n);
	for(int i = 0; i < n; i ++) cin >> g[i];

	const ll mod = 1e9 + 7;
	vector<vector<ll>> f(n,vector<ll>(m ,0));

	f[0][0] = 1;
	for(int i = 0; i < n; i ++)
		for(int j = 0; j < m; j ++)
			if(g[i][j] == '.') {
				if(i - 1 >= 0 and g[i - 1][j] == '.')
					f[i][j] = (f[i][j] + f[i - 1][j]) % mod;
				if(j - 1 >= 0 and g[i][j - 1] == '.')
					f[i][j] = (f[i][j] + f[i][j - 1]) % mod;
			}	

	cout << f[n - 1][m - 1] << "\n";
	return 0;
}