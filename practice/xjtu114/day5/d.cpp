#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 25;
int f[N][N][N][N];

int main()
{
    std::ios::sync_with_stdio(0),std::cin.tie(0);

	int n,m;
	cin >> n >> m;
	vector<vector<int>> a(n + 1,vector<int>(n + 1,0));
	for(int i = 0; i < m; i ++) {
		int x,y,z;
		cin >> x >> y >> z;
		x --, y --;
		a[x][y] = z;
	}

	
	for(int i = 1; i <= n; i ++)
		for(int j = 1; j <= n; j ++)
			for(int k = 1; k <= n; k ++)
				for(int l = 1; l <= n; l ++)
				{
					int mx = max({f[i-1][j][k-1][l],f[i-1][j][k][l-1],
								f[i][j-1][k-1][l],f[i][j-1][k][l-1]});
					f[i][j][k][l] = mx + a[i - 1][j - 1];
					if(!(i == k and j == l))
						f[i][j][k][l] += a[k - 1][l - 1];
				}

	cout << f[n][n][n][n] << "\n";

	return 0;
}