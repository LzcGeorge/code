#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// 答案/构造 是从样例中推出来的，不是猜出来的

const int N = 500010;
int nxt[N][26];
int sz[N];
int cnt = 0;
void insert(string s) {
    int cur = 0;
    for(auto c: s) {
        int x = c - 'a';
        if(!nxt[cur][x]) nxt[cur][x] = ++cnt;
        cur = nxt[cur][x];
        sz[cur] ++;
    }
    
}

int search(string s) {
    int cur = 0;
    for(auto c: s) {
        int x = c - 'a';
        if(!nxt[cur][x]) return false;
        cur = nxt[cur][x];
    }
    return sz[cur];
}
void solve()
{
    int n,m;
    cin >> n;
    for(int i = 0; i < n; i ++) {
        string s;
        cin >> s;
        insert(s);
    }
    cin >> m;
    for(int i = 0; i < m; i ++) {
        string s;
        cin >> s;
        cout << search(s) << "\n";
    }
    
}

int main()
{
    std::ios::sync_with_stdio(0),std::cin.tie(0);
    
    solve();
}