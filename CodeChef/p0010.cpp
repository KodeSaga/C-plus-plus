//[Complete]Problem statement - https://www.codechef.com/LTIME69B/problems/AVG

#include <iostream>
using namespace std;

int main() {

        long long t,n,k,v,a,count=0;
        cin >> t;
        for(int i=0;i<t;i++){
            cin >> n >> k >> v;
            count=0;
            for(int j=0;j<n;j++){
	                cin >> a;
                    count +=a;
            }
            if ((((v*(k+n) - count)%k) == 0) && ((v*(k+n) - count) > 0))
                    cout << (v*(k+n) - count)/k <<endl;
            else
                cout << -1 <<endl;
        }
	return 0;
}