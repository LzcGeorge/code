#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// 答案/构造 是从样例中推出来的，不是猜出来的

void solve()
{
	int n;
	cin >> n;
	std::vector<int> a(n);
	for(int i = 0; i < n; i ++) cin >> a[i];

	int t = n - 1;
	stack<int> s;
	while(a[t] != 0) {
		s.push(a[t]);
		t = a[t];
	}
	vector<int> res(n);
	int va = n - t;
	for(int i = 0; i < t; i --) {
		res[i] = n - i;
	}
	while(s.size()) {
		int x = s.top();
		s.pop();
		res[x] = va--;
	}
	for(int i = t; i < n - 1; i ++) res[i] = va--;
	for(int i = 0; i < n; i ++) cout << res[i] << " ";
}

int main()
{
    std::ios::sync_with_stdio(0),std::cin.tie(0);
    
    solve();
}