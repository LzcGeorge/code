#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// 答案/构造 是从样例中推出来的，不是猜出来的
void solve()
{
    int n,m,p,x;
    cin >> n >> m >> p >> x;
    set<array<int,3>> st;
    auto fun = [](int i,int j,int k) {
        return 2ll * i * i + 2ll * j * j + 1ll * k * k + 1ll * i * j + 2ll * i * k + 2ll * j * k; 
    };
    for(int i = 1; i <= n; i ++) {
        if(i * i > x) break;
        for(int j = 1; j <= m; j ++) {
            if((i + j)*(i + j)  > x or i * j > x) break;
            for(int k = 1; k <= p; k ++) {
                if((i + j + k) * (i + j + k) + i * j > x) break;
                ll t = fun(i,j,k);
                if(t > x) break;
                else if( t == x) st.insert({i,j,k});
            }
        }
    }
    cout << st.size() << "\n";
}

int main()
{
    std::ios::sync_with_stdio(0),std::cin.tie(0);
    int T = 1;
    cin >> T;
    while(T --)
        solve();
}