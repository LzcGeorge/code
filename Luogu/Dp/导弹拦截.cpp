#include <bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> a;
	vector<int> b;
	int x;
	while(cin >> x) {
		a.push_back(x);
		int pos = -1;
		for(int i = 0; i < b.size(); i ++) {
			if(b[i] >= x) {
				if(pos == -1 or b[pos] > b[i])
					pos = i;
			}
		}
		if(pos == -1) b.push_back(x);
		else b[pos] = x;
	}

	int n = a.size(),res = 1;
	vector<int> c(n,1);
	for(int i = 0; i < n; i ++) 
		for(int j = 0; j < i; j ++)
			if(a[j] >= a[i]) {
				c[i] =  max(c[i],c[j] + 1);
				res = max(res,c[i]);
			}

	cout << res << "\n";

	cout << b.size() << "\n";

	return 0;

}