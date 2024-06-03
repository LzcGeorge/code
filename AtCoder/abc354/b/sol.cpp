#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// 答案/构造 是从样例中推出来的，不是猜出来的

void solve()
{
    int n;
    cin >> n;
    int tot = 0;
    vector<string> a(n);
    for(int i = 0; i < n; i ++) {
        string s;
        int x;
        cin >> s >> x;
        a[i] = s, tot += x;
    }
    sort(a.begin(),a.end());
    cout << a[tot%n];
}

int main()
{
    std::ios::sync_with_stdio(0),std::cin.tie(0);
    
    solve();
}