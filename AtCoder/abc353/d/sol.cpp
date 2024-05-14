#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// 答案/构造 是从样例中推出来的，不是猜出来的
ll b[] = {0,10,100,1000,10000,100000,1000000,10000000,100000000,1000000000,10000000000,10000000000};
void solve()
{
    int n;
    cin >> n;
    vector<ll> a(n);
    const ll mod = 998244353;
    ll t = 0,sum = 0;
    for(int i = 0; i < n; i ++) {
        cin >> a[i];
        t += b[to_string(a[i]).size()];
        sum = sum + a[i];
    }
    ll res = 0;
    for(int i = 0; i < n; i ++) {
        t -= b[to_string(a[i]).size()];
        res = (res % mod + (1ll * (a[i] % mod ) * (t % mod)) % mod) % mod ;
        sum -= a[i];
        res = (res % mod + sum % mod) % mod ;
    }
    cout << res % mod;
}

int main()
{
    std::ios::sync_with_stdio(0),std::cin.tie(0);
    
    solve();
}