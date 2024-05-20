#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// 答案/构造 是从样例中推出来的，不是猜出来的

void solve()
{
	double x,y;
	cin >> x >> y;
	std::cout << std::setprecision(13);
	
	cout << 0.5*x + 0.5* y << " " << 0.5*sqrt(3) * x - 0.5*sqrt(3)*y;

}

int main()
{
    std::ios::sync_with_stdio(0),std::cin.tie(0);
    
    solve();
}