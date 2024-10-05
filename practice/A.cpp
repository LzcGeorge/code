#include<bits/stdc++.h>
using namespace std;

int main()
{
    // 前缀和大于零,最多改多少个数。
    // 如果前面能改的都改
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto& c: a) cin >> c;

    int sum = 0,res = 0;
    for(int i = 0; i < n; i ++) {
        if(sum - 1 > 0) {
            sum -= 1;
            res ++;
        } else {
            
        }
    }    
    return 0;
}