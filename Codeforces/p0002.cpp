//CodeForces - 19-02-2019 - https://codeforces.com/contest/1118/problem/A
#include <iostream>
//#include<fstream>
using namespace std;

int main() {
 //   ifstream infile("input.txt");
 //   ofstream outfile("output.txt");
    long n;
    int t,a,b,i;
    long minmoney;
    cin >> t;
    for(i=0;i<t;i++) {
        cin>> n >> a >> b;
        if (b >= (2*a))
            minmoney = n*a;
        else if(n%2==0)
                minmoney = (n/2)*b;
             else
                minmoney = (n/2)*b + a;
        cout << minmoney << endl;          
    }
    //infile.close();
    //outfile.close();
	return 0;
}