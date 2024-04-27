#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// 答案/构造 是从样例中推出来的，不是猜出来的

void solve()
{
    int n,k;
    cin >> n >> k;
    for(int i = 0; i < n; i ++) {
        int x;
        cin >> x;
        if(x % k == 0) {
            cout << x/k << " ";
        }
    }
}

int main()
{
    std::ios::sync_with_stdio(0),std::cin.tie(0);
    
    solve();
}