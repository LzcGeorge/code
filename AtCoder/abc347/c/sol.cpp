#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// 答案/构造 是从样例中推出来的，不是猜出来的

void solve()
{
    ll n,a,b;
    cin >> n >> a >> b;
    ll mn = 1e13,mx = -1;
    ll w = a + b;
    vector<int> v(n);
    for(int i = 0; i < n; i ++) {
        int x;
        cin >> x;
        v[i] = x % w;
        mn = min(x%w,mn);
        mx = max(x%w,mx);
    }
    if(mx - mn + 1 <= a) {
        cout << "Yes";
        return;
    }
    sort(v.begin(),v.end());
    
    for(int i = 1; i < n; i ++) {
        if(v[i] - v[i-1] > b and v[i-1] <= a) {
            cout << "Yes";
            return;
        }
    }
    cout << "No";
}

int main()
{
    std::ios::sync_with_stdio(0),std::cin.tie(0);
    
    solve();
}