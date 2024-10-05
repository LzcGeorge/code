#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// 答案/构造 是从样例中推出来的，不是猜出来的

void solve()
{
    string s = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    map<char,int> mp;
    
    int res = 0;
    string t;
    cin >> t;
    for(int i = 0; i < 26; i ++) {
        mp[t[i]] = i;
    }
    char cur = 'A';
    for(auto c: s) {
        res += abs(mp[c] - mp[cur]);
        cur = c;
    }
    cout << res << "\n";
}

int main()
{
    std::ios::sync_with_stdio(0),std::cin.tie(0);
    
    solve();
}