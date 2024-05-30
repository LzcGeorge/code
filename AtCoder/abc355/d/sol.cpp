#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// 答案/构造 是从样例中推出来的，不是猜出来的

void solve()
{
    int n;
    cin >> n;
    vector<pair<int,int>> a;
    for(int i = 0; i < n; i ++) {
        int l,r;
        cin >> l >> r;
        a.push_back({l,-1});
        a.push_back({r,1});
    }
    sort(a.begin(),a.end());

    ll res = 0, tot = 0;
    for(auto [k,x]: a) {
        if(x == -1) {
            tot += 1;
        } else {
            tot -= 1;
            res += tot;
        }
    }
    cout << res;
}

int main()
{
    std::ios::sync_with_stdio(0),std::cin.tie(0);
    
    solve();
}