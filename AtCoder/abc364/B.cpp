#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// 答案/构造 是从样例中推出来的，不是猜出来的

void solve()
{
    int n,m,x,y;


    cin >> n >> m >> x >> y;
    x --, y --;

    vector<string> s(n);
    for(int i = 0; i < n; i ++) cin >> s[i];

    string path;
    cin >> path;

    for(auto c: path) {
        if(c == 'L') {
            int dx = x,dy = y - 1;
            if(dx < 0 || dx >= n || dy < 0 || dy >= m) continue;
            if(s[dx][dy] == '#') continue;
            x = dx,y = dy;
        } else if(c == 'R') {
            int dx = x,dy = y + 1;
            if(dx < 0 || dx >= n || dy < 0 || dy >= m) continue;
            if(s[dx][dy] == '#') continue;
            x = dx,y = dy;
        } else if(c == 'U') {
            int dx = x - 1,dy = y;
            if(dx < 0 || dx >= n || dy < 0 || dy >= m) continue;
            if(s[dx][dy] == '#') continue;
            x = dx,y = dy;
        } else {
            int dx = x + 1,dy = y;
            if(dx < 0 || dx >= n || dy < 0 || dy >= m) continue;
            if(s[dx][dy] == '#') continue;
            x = dx,y = dy;
        }
    }
    cout << x + 1 << " " << y + 1 << "\n";

}

int main()
{
    std::ios::sync_with_stdio(0),std::cin.tie(0);
    
    solve();
}