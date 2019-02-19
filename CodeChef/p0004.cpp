//Codechef 19th Feb 2019 https://www.codechef.com/COMU2019/problems/WLCDM
#include <iostream>
#include<vector>
using namespace std;

int main() {  
    int n,ki,j,sum,candle=0;
    cin >> n >> k;
    
    vector<int> a(n);
    vector<int> b(n);
    vector<int> c(n);
    vector<int> d(n);
    for(i=0;i<n;i++) {
        cin >> a[i];        
    }
    for(i=0;i<n;i++) {
        cin >> b[i];        
    }
    c[0]=a[0]+b[0]
    for(i=0;i<n;i++) {
        c[i]=a[i]-b[i];        
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