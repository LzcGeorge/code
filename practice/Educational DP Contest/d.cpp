#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    std::ios::sync_with_stdio(0),std::cin.tie(0);

	int n,w;
	cin >> n >> w;
	vector<int> W(n+1),V(n+1);
	vector<ll> f(w+1);
	for(int i = 1; i <= n;i ++)
		cin >> W[i] >> V[i];

	for(int i = 1; i <= n; i ++)
		for(int j = w; j >= W[i]; j --)
			f[j] = max(f[j],f[j - W[i]] + V[i]);

	cout << f[w] << "\n";

	return 0;
}