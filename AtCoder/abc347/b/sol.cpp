#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// 答案/构造 是从样例中推出来的，不是猜出来的

void solve()
{
    string s;
    cin >> s;
    set<string> se;
    int n = s.size();
    for(int i = 0; i < n; i ++) {
        for(int j = 1; i + j <= n; j ++) {
            se.insert(s.substr(i,j));
        }
    }
    cout << se.size();
}

int main()
{
    std::ios::sync_with_stdio(0),std::cin.tie(0);
    
    solve();
}