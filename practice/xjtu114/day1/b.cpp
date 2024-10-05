#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// 答案/构造 是从样例中推出来的，不是猜出来的
ll gcd(ll a, ll b) {
    return b == 0 ? a : gcd(b, a % b);
}
void solve()
{
    int n;
    cin >> n;
    vector<array<ll, 3>> a(n);
    for(int i = 0; i < n; i ++) {
        ll x,y;
        cin >> x >> y;
        ll z = gcd(x,y);
        a[i] = {x/z,y/z,i};
    }
    sort(a.begin(),a.end(),[](const auto x,const auto y){
        // x[0] / x[1] > y[0]/ y[1] --> x[0]*y[1] > y[0] * x[1];
        return 1ll * x[0]* y[1] > 1ll * y[0] * x[1];
    });
    for(auto x: a) {
        cout << x[0] << "/" << x[1] << "\n";
    }

}

int main()
{
    std::ios::sync_with_stdio(0),std::cin.tie(0);
    
    solve();
}