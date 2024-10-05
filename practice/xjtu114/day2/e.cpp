#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// 答案/构造 是从样例中推出来的，不是猜出来的

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n),b(n+1);
    for(auto&x : a) cin >> x;
    for(int i = 1; i <= n; i ++)
        b[i] = a[i] - a[i - 1];
    
    b[0] = a[0];
    int cur = 0;
    for(int i = 0; i < n; i ++) {
        if(b[i] > 0) cur += b[i];
    }
    cout << cur << "\n";
}

int main()
{
    std::ios::sync_with_stdio(0),std::cin.tie(0);
    
    solve();
}