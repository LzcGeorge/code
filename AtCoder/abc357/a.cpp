#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// 答案/构造 是从样例中推出来的，不是猜出来的

void solve()
{
    int n,m;
    cin >> n >> m;
    int res = 0;
    for(int i = 0; i < n; i ++) {
        int x;
        cin >> x;
        if(m >= x) res ++, m -= x;
        else {
            cout << res << "\n";
            return;
        }
    }
    cout << res << "\n";
}

int main()
{
    std::ios::sync_with_stdio(0),std::cin.tie(0);
    
    solve();
}