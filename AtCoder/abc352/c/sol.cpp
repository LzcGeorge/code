#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// 答案/构造 是从样例中推出来的，不是猜出来的

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n),b(n);
    ll sum = 0;
    for(int i = 0; i < n; i ++) {
        cin >> a[i] >> b[i];
        sum += a[i];
    }

    ll res = -1;
    for(int i = 0; i < n; i ++) {
        res = max(res, sum - a[i] + b[i]);
    }
    cout << res;

}

int main()
{
    std::ios::sync_with_stdio(0),std::cin.tie(0);
    
    solve();
}