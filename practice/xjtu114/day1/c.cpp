#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// 答案/构造 是从样例中推出来的，不是猜出来的
void solve()
{
    int t,n;
    cin >> t >> n;
    vector<int> a(n),w(n);
    for(auto& x: a) cin >> x;
    for(auto& x: w) cin >> x;

    ll res = 0;
    for(int i = 0; i < 1 << n; i ++) {
        // 枚举二进制下 i 的每一位
        int sum = t,cnt = 1;
        ll cur = 0;
        for(int j = 0; j < n; j ++) {
            if(i & (1 << j) ) {
                if(sum >= a[j]) {
                    sum -= a[j];
                    cur += 1ll * cnt * w[j];
                    cnt ++;
                } 
            }
        }
        res = max(res,cur);
    }
    cout << res << "\n";
}

int main()
{
    std::ios::sync_with_stdio(0),std::cin.tie(0);
    
    solve();
}