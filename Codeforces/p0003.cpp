//[inComplete]CodeForces - 19-02-2019 - https://codeforces.com/contest/1118/problem/B
#include <iostream>
#include<vector>
using namespace std;

int main() {  
    int n,i,j,sum,candle=0;
    cin >> n;
    
    vector<int> a(n);
    vector<int> b(n);
    for(i=0;i<n;i++) {
        cin >> a[i];        
    }

    for(i=0;i<n;i++) {
        b = a;
        sum = 0;
        b.erase(b.begin()+i);
        for(j=0;j<n-1;j++) {
            if((j%2) == 0){
                sum += b[j];
            }
            else {
                sum -= b[j];
            }
        }
        if(sum == 0)
            candle++;
    }
    cout << candle;
	return 0;
}