#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// 答案/构造 是从样例中推出来的，不是猜出来的

void solve()
{
    int k,n;
    cin >> k >> n;
    vector<int> a(n);
    for(auto& x: a) cin >> x;

    sort(a.begin(),a.end());
    int l = 0,r = n - 1;
    int res = 0;
    while(l <= r) {
        if(a[l] + a[r] <= k) {
            l ++,r --;
        } else {
            r --;
        }
        res += 1;
    }
    cout << res << "\n";
}

int main()
{
    std::ios::sync_with_stdio(0),std::cin.tie(0);
    
    solve();
}