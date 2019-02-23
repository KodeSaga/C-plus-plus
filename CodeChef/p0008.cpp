//[Complete]Problem statement - https://www.codechef.com/NCC2019/problems/NCC1903

#include <iostream>
using namespace std;

int main() {

        long int t,n,k,a,count=0;
        cin >> t;
        for(int i=0;i<t;i++){
            cin >> n >> k;
            count=0;
            for(int j=0;((j<k) && (n>=0)) ;j++){
	                cin>>a;
                    if(a <= n){
                            n -= a;
                            count++;
                    }
            }
            cout << count << endl;
        }
	return 0;
}
