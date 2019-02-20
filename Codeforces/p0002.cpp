//[Complete]CodeForces - 19-02-2019 - https://codeforces.com/contest/1118/problem/A
#include <iostream>
using namespace std;

int main() {
    long long n,a;
    int t,b,i;
    long long minmoney;
    cin >> t;
    for(i=0;i<t;i++) {
        cin>> n >> a >> b;
        if (b >= (2*a)){
            minmoney = n*a;
            cout << minmoney << endl;   
            continue;
        }
        else if(n%2==0)
                minmoney = (n/2)*b;
             else
                minmoney = (n/2)*b + a;
        cout << minmoney << endl;          
    }
	return 0;
}