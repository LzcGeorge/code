#include <bits/stdc++.h>
using namespace std;

#define debug(x...)                                                            \
  do {                                                                         \
    cout << "\033[32;1m" << #x << " -> ";                                      \
    rd_debug(x);                                                               \
  } while (0)

void rd_debug() { cout << "\033[39;0m" << endl; }

template <class T, class... Ts> void rd_debug(const T &arg, const Ts &...args) {
  cout << arg << " ";
  rd_debug(args...);
}

using ll = long long;
#define eb emplace_back
#define pb push_back
#define DE cout << "-----------\n"

const int inf = 0x3f3f3f3f;
const int N = 2e5,M = 5e5;

void solve()
{
    // 最小的数后面是有序的就行，次数是最小的数前面数的个数
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &it: a) cin >> it;
    int mn = inf,pos = -1;
    for(int i = 0; i < n; i ++) {
        if(a[i] < mn) {
            mn = a[i];
            pos = i;
        }
    }

    for(int i = pos+1; i < n; i ++) {
        if(a[i] < a[i-1]) {
            cout << "-1\n";
            return;
        }
    }
    cout << pos << "\n";
}

int main()
{
    std::ios::sync_with_stdio(0),std::cin.tie(0);
    ll T = 1;

    cin  >> T;
    while (T--)
        solve();
}