#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// 答案/构造 是从样例中推出来的，不是猜出来的

void solve()
{
    int n;
    cin >> n;
    ll res = 0;
    for(int i = 1; i <= n; i ++) {
        ll mx = 1ll * (n+1) * (n+1) - 1ll * i * i;
        ll mn = 1ll * n * n - 1ll * i * i;
        ll smn = sqrt(mn);
        if(smn * smn < mn) ++ smn;
        ll smx = sqrt(mx);
        if(smx * smx >= mx) -- smx;
        res += smx - smn + 1;
    }

    cout << res * 4 << "\n";

}

int main()
{
    std::ios::sync_with_stdio(0),std::cin.tie(0);
    int T = 1;
    cin >> T;
    while(T --) 
        solve();
}