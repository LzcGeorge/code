#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    std::ios::sync_with_stdio(0),std::cin.tie(0);
    std::cout << std::fixed << std::setprecision(10);
	int n;
	cin >> n;
	vector<double> a(n + 1);
	for(int i = 1; i <= n; i ++) cin >> a[i];

	vector<vector<double>> f(n + 1,vector<double>(n + 1,0.0));
	
	f[0][0] = 1;
	for(int i = 1; i <= n; i ++)
		for(int j = 0; j < i; j ++)
		{
			f[i][j + 1] += f[i - 1][j] * a[i];
			f[i][j] += f[i - 1][j] * (1.0f - a[i]);
		}

	double res = 0.0;
	for(int i = n + 1 >> 1; i <= n; i ++)
		res += f[n][i];
	cout << res << "\n";
	return 0;
}