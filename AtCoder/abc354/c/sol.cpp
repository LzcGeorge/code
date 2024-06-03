#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// 答案/构造 是从样例中推出来的，不是猜出来的

void solve()
{
    int n;
    cin >> n;
    vector<pair<int,int>> a(n);
    map<int,int> mp;
    for(int i = 0; i < n; i ++) {
        int b,c;
        cin >> b >> c;
        a[i] = {-b,c};
        mp[-b] = i + 1;
    }
    sort(a.begin(),a.end());
    int mn = 1 << 30;
    set<int> res;
    for(auto [x,y]: a) {
        if(y > mn) continue;
        mn = min(mn,y);
        res.insert(mp[x]);
    }
    cout << res.size() << "\n";
    for(auto x: res) cout << x << " ";

}

int main()
{
    std::ios::sync_with_stdio(0),std::cin.tie(0);
    
    solve();
}