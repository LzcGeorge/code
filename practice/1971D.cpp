#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// 答案/构造 是从样例中推出来的，不是猜出来的

void solve()
{
    string s;
    cin >> s;
    int res = 1;
    int f = 0;
    for(int i = 1; i < s.size(); i ++) {
        if(s[i] != s[i-1])
            res ++;
        if(s[i-1] == '0' and s[i] == '1') f = 1;
    }
    cout << res - f << "\n";
}

int main()
{
    std::ios::sync_with_stdio(0),std::cin.tie(0);
    int T = 1;
    cin >> T;
    while(T --) 
        solve();
}