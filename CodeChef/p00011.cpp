//[Complete]Problem statement - https://www.codechef.com/LTIME69B/problems/TRICKYDL

#include <iostream>
#include <cmath>
using namespace std;

int main() {

        long long a,p1,p2,dif,difprev;
        int t,i,j,k;
        cin >> t;
        for(int i=0;i<t;i++){
            cin >> a;
            j=0;
            k=0;
            p1=0;
            p2=0;
            dif=0;
            difprev = 0;

            while( (p1 > p2) || (j==0)){
                    p1 += a;
                    p2 += pow(2,j);
                    j++;
                    dif = p1-p2;
                    if (dif > difprev ){
                        difprev = dif;
                        k++;
                    }
            }
            cout << j-1 <<"  "<<k <<endl;
        }
	return 0;
}