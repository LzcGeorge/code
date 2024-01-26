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

// 答案/构造 是从样例中推出来的，不是猜出来的
void solve()
{
    int n;
    cin >> n;
    deque<pair<int,int>> q(n);
    for(int i = 0; i < n; i ++) q[i].first = i+1,q[i].second = 0;
    int p;
    cin >> p;
    // 双端队列，剔除出最后一个，加入一个新的。
    while(p --) {
      int c;
      cin >> c;
      if(c == 1) {
        auto [x,y] = q[0];
        char op;
        cin >> op;
        if(op == 'R') x += 1;
        else if(op == 'L') x -= 1;
        else if(op == 'U') y += 1;
        else if(op == 'D') y -= 1;
        q.push_front({x,y});
        q.pop_back();
      } else {
        int po;
        cin >> po;
        cout << q[po-1].first << " " << q[po-1].second << "\n";
      }
    }
}

int main()
{
    std::ios::sync_with_stdio(0),std::cin.tie(0);
    ll T = 1;

    // cin  >> T;
    while (T--)
        solve();
}