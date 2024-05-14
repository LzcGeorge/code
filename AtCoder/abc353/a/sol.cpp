#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// 答案/构造 是从样例中推出来的，不是猜出来的

void solve()
{
    int n;
    cin >> n;
    int x;
    cin >> x;
    for(int i = 1; i < n; i ++) {
        int a;
        cin >> a;
        if(a > x) {
            cout << i + 1;
            return;
        }
    }
    cout << "-1";
}

int main()
{
    std::ios::sync_with_stdio(0),std::cin.tie(0);
    
    solve();
}