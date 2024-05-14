#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// 答案/构造 是从样例中推出来的，不是猜出来的

void solve()
{
    int n;
    cin >> n;
    vector<ll> a(n);
    ll sum = 0,mod = 1e8,t;
    ll res = 0;
    for(auto &x: a) cin >> x, sum = sum + x;
    t = sum;
    sort(a.begin(),a.end());
    for(int i = 0; i < n; i ++) {
        int j = lower_bound(a.begin(),a.end(),mod - a[i]) - a.begin();
        if(j <= i) j = i + 1;
        t -= a[i];
        res += (n - i - 1) * a[i] + t - (n - j) * mod;
    }
    cout << res;
}

int main()
{
    std::ios::sync_with_stdio(0),std::cin.tie(0);
    
    solve();
}