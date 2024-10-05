#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// 答案/构造 是从样例中推出来的，不是猜出来的

void solve()
{
    int n;
    cin >> n;
    vector<pair<int,int>> a(n);
    for(int i = 0; i < n; i ++) {
        int x,y;
        cin >> x >> y;
        a[i] = {x,y};
    }
    sort(a.begin(),a.end(),[](const auto& x,const auto& y){
        return x.second < y.second;
    });
    
    int cur = -1,res = 0;
    for(auto [x,y]: a) {
        if(x >= cur) {
            cur = y;
            res ++;
        }
    }
    cout << res << "\n";
}

int main()
{
    std::ios::sync_with_stdio(0),std::cin.tie(0);
    
    solve();
}