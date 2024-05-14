#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// 答案/构造 是从样例中推出来的，不是猜出来的
const int N = 3e5+10;

ll son[N][26],cnt[N],idx;

void insert(string str,int val)
{
    int p=0;    // 0 表示从根节点开始访问
    for (int i = 0; i < str.size(); i ++ )
    {
        int x = str[i] - 'a';
        if(!son[p][x]) son[p][x]=++idx;
        p=son[p][x];
        cnt[p] += val;
    }
}
ll query(string str)
{
    int p=0;
    ll res = 0;
    for(int i =0;str[i]; i++)
    {
        int x=str[i]-'a';
        if(!son[p][x]) break;
        p=son[p][x];
        res += cnt[p];
    }
    return res;
}


void solve()
{
    int n;
    cin >> n;
    vector<string> a(n);
    for(int i = 0; i < n; i ++) {
        cin >> a[i];
        insert(a[i],1);
    }
    ll res = 0;
    for(int i = 0; i < n; i ++) {
        insert(a[i], - 1);
        res += query(a[i]);
    }
    cout << res;
}

int main()
{
    std::ios::sync_with_stdio(0),std::cin.tie(0);
    
    solve();
}