#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// 答案/构造 是从样例中推出来的，不是猜出来的

void solve()
{
    ll N,X,Y;
    cin >> N >> X >> Y;

    vector<int> a(N),b(N);
    for(auto& x: a) cin >> x;
    for(auto& x: b) cin >> x;


    sort(a.begin(),a.end(),greater<>());
    sort(b.begin(),b.end(),greater<>());
    
    int res = N;
    for(int i = 0; i < N; i ++) {
        X -= a[i];
        if(X < 0) {
            res = min(res, i + 1);
        }
    }

    for(int i = 0; i < N; i ++) {
        Y -= b[i];
        if(Y < 0) {
            res = min(res, i + 1);
        }
    }
    cout << res << "\n";
}

int main()
{
    std::ios::sync_with_stdio(0),std::cin.tie(0);
    
    solve();
}