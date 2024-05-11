#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// 答案/构造 是从样例中推出来的，不是猜出来的

void solve()
{
    int n,k,q;
    cin >> n >> k >> q;

    std::vector<int> a(k + 2),b(k + 2);
    for(int i = 1; i <= k; i ++) cin >> a[i];
    for(int i = 1; i <= k; i ++) cin >> b[i];

    while(q --) {
        int d;
        cin >> d;
        int l = 0,r = k + 1;
        while(l < r) {
            int mid = l + r + 1 >> 1;
            if(a[mid] < d) l = mid;
            else r = mid - 1;
        }
        // cout <<q << ": " << l  << " " << d << "\n";
        long double eps = 1e-15;
        if(a[l] == d) cout << b[l] << " ";
        else {
            long double v = (1.0L * b[l + 1] - b[l])/(a[l + 1] - a[l]);
            cout << (int)(eps + b[l] + (d - a[l]) * v) << " ";
            // cout << (int)(b[l] + (d - a[l]) * (1.0L * b[l + 1] - b[l])/(a[l + 1] - a[l])) << " ";

        }

    }
    cout << "\n";
}

int main()
{
    std::ios::sync_with_stdio(0),std::cin.tie(0);
    int T = 1;
    cin >> T;
    while(T --) 
        solve();
}