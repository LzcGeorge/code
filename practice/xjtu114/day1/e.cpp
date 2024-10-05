#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// 答案/构造 是从样例中推出来的，不是猜出来的
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto& x: a) cin >> x;

    sort(a.begin(),a.end(),greater<>());
    if(n == 1) cout << a[0] << "\n";
    else cout << (a[0] ^ (a[1] - 1)) << "\n";
}

int main()
{
    std::ios::sync_with_stdio(0),std::cin.tie(0);
    int T = 1;
    cin >> T;
    while(T --)
        solve();
}