#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// 答案/构造 是从样例中推出来的，不是猜出来的

void solve()
{
    string s,t;
    cin >> s >> t;
    // cout << s << t;
    int i = 0;
    for(int j = 0; j < t.size(); j ++) {
        if(i < s.size() and s[i] == t[j]) {
            cout << j + 2 << " ";
            i ++;
        }
    }
}

int main()
{
    std::ios::sync_with_stdio(0),std::cin.tie(0);
    
    solve();
}