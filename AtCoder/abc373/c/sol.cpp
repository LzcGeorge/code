#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// 答案/构造 是从样例中推出来的，不是猜出来的
const ll INF = -1e11;
void solve()
{
    int n;
    cin >> n;
    ll A = INF,B = INF;
    for(int i = 0; i < n;i ++) {
        ll x;
        cin >> x;
        A = max(A,x);
    }
    for(int i = 0; i < n;i ++) {
        ll x;
        cin >> x;
        B = max(B,x);
    }
    cout << A + B << "\n";
}

int main()
{
    std::ios::sync_with_stdio(0),std::cin.tie(0);
    
    solve();
}