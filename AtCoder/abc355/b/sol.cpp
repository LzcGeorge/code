#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// 答案/构造 是从样例中推出来的，不是猜出来的

void solve()
{
    int n,m;
    cin >> n >> m;
    vector<int> a(n),b(m);
    for(auto& x: a) cin >> x;
    for(auto& x: b) cin >> x;

    sort(b.begin(),b.end());
    sort(a.begin(),a.end());
    
    vector<int> c(n+m);
    int l = 0, r = 0;
    for(int i = 0; i < n + m; i ++) {
        if(l < n and a[l] < b[r]) {
            if(i > 0 and l > 0 and c[i - 1] == a[l - 1]) {
                cout << "Yes\n";
                return;
            }
            c[i] = a[l++];
        }
        else c[i] = b[r++];
    }
    cout << "No\n";
}

int main()
{
    std::ios::sync_with_stdio(0),std::cin.tie(0);
    
    solve();
}