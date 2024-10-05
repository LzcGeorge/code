#include <bits/stdc++.h>
using namespace std;
int main()
{
	int N,K;
	cin >> N >> K;
	vector<int> a(N,0),f(N,0);
	for(auto& x: a) cin >> x;

	f[0] = 0;
	for(int i = 1; i < N; i ++) {
		f[i] = f[i-1] + abs(a[i] - a[i-1]);
		for(int j = 2; j <= K and i - j >= 0; j ++) 
			f[i] = min(f[i],f[i - j] + abs(a[i] - a[i - j]));
	}
	cout << f[N - 1];

}