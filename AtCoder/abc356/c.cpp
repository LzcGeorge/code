#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main()
{
    std::ios::sync_with_stdio(0),std::cin.tie(0);
    
    int n,m,k;
    cin >> n >> m >> k;

    vector<int> s(m),r(m);
    for(int i = 0; i < m; i ++) {
        int c;
        cin >> c;
        for(int j = 0; j < c; j ++) {
            int x;
            cin >> x;
            x --;
            s[i] |= 1 << x;
        }

        char R;
        cin >> R;
        r[i] = (R == 'o');
    }

    int res = 0;
    for(int ss = 0; ss < (1 << n); ss ++) {
        int ok = 1;
        for(int i = 0; i < m; i ++) {
            if ((__builtin_popcount(s[i] & ss) >= k) != r[i]) {
                ok = 0;
            }
        }
        res += ok;
    }
    cout << res << "\n";
    return 0;
}