#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
	int n;
	cin >> n;
	vector<int> A(n),B(n),C(n);
	vector<vector<int>> f(n,vector<int>(3,0));
	for(int i = 0; i < n; i ++) 
		cin >> A[i] >> B[i] >> C[i];

	f[0][0] = A[0],f[0][1] = B[0],f[0][2] = C[0];
	
	for(int i = 1; i < n; i ++) {
		f[i][0] = max(f[i-1][1],f[i-1][2]) + A[i];
		f[i][1] = max(f[i-1][0],f[i-1][2]) + B[i];
		f[i][2] = max(f[i-1][1],f[i-1][0]) + C[i];
	}
	cout << max({f[n-1][0],f[n-1][1],f[n-1][2]}) << "\n";

	return 0;
}