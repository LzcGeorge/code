#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// 答案/构造 是从样例中推出来的，不是猜出来的
string s[111];
void solve()
{
    int n,m = 0;
    cin >> n;
    for(int i = 0; i < n; i ++) {
        cin >> s[i];
        m = max(m,(int)s[i].size());
    }
    for(int i = 0; i < m; i ++) {
        string t = "";
        for(int j = 0; j < n; j ++) {
            if(i < s[j].size()) 
                t += s[j][i];
            else
                t += "*";
        }
        reverse(t.begin(),t.end());
        while(t.back() == '*') t.pop_back();
        cout << t << "\n";
    }
}

int main()
{
    std::ios::sync_with_stdio(0),std::cin.tie(0);
    
    solve();
}