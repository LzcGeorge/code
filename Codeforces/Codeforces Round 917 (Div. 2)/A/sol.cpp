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
    int n;
    cin >> n;
    int f = 1;
    vector<int> a(n);
    for(auto &x: a) {
        cin >> x;
        if(x < 0) f *= -1;
        else if(x == 0) f *= 0;
    }
    sort(a.begin(),a.end());
    if(f <= 0) {
        cout << "0\n";
    } else {
        cout << "1\n";
        cout << "1 0\n";
    }
}

int main()
{
    std::ios::sync_with_stdio(0),std::cin.tie(0);
    ll T = 1;

    cin  >> T;
    while (T--)
        solve();
}