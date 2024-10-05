#include <bits/stdc++.h>
using namespace std;
int main()
{
	int N;
	cin >> N;
	vector<int> a(N,0),f(N,0);
	for(auto& x: a) cin >> x;

	f[0] = 0;
	for(int i = 1; i < N; i ++) {
		f[i] = f[i-1] + abs(a[i] - a[i-1]);
		if(i - 2 >= 0)
			f[i] = min(f[i],f[i - 2] + abs(a[i] - a[i-2]));
	}
	cout << f[N - 1];

}