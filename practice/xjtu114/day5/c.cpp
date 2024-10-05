#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    std::ios::sync_with_stdio(0),std::cin.tie(0);

	int n,m;
	cin >> n >> m;
	vector<int> v(n),w(n),l(n),f(m);
	vector<int> c[3];
	
	for(int i = 0; i < n; i ++) {
		cin >> v[i] >> w[i] >> l[i];
		if(l[i] == 1) c[0].push_back(i);
		else if(l[i] == -1) c[1].push_back(i);
		else c[2].push_back(i);
	}

	for(int i: c[0])
		for(int j = m; j >= v[i]; j --)
			f[j] = max(f[j],f[j - v[i]] + w[i]);

	for(int i: c[1])
		for(int j = v[i]; j <= m; j ++)
			f[j] = max(f[j],f[j - v[i]] + w[i]);

	for(int i: c[2]) {
		int res = l[i];
		// 2 进制拆分
		for(int k = 1; k <= res; res -= k, k += 2)
			for(int j = m; j >= v[i] * k; j --)
				f[j] = max(f[j],f[j - v[i] * k] + w[i] * k);

		for(int j = m; j >= v[i] * res; j --)
			f[j] = max(f[j],f[j - v[i] * res] + w[i] * res);
	}

	cout << f[m] << "\n";

	return 0;
}