#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// 答案/构造 是从样例中推出来的，不是猜出来的

const double pi = 3.14159265358979323846264338327950288;
void solve()
{
	double a,b;
	cin >> a >> b;
	double t,v;
	cin >> t >> v;
	double us = t*v - (int)(t*v);
	double r = sqrt(a*a+b*b);
	std::cout << std::setprecision(13);
	cout << 2.0 * sqrt(a*a+b*b)* sin(M_PI * us);
}

int main()
{
    std::ios::sync_with_stdio(0),std::cin.tie(0);
    
    solve();
}