//[inComplete]Problem statement - https://www.codechef.com/PLUM2019/problems/TONYFOOD
#include <iostream>
using namespace std;

int main() {
    int n,sum=0;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++){
	    cin >> a[i];
	    sum += a[i];
	}
	if(sum%3 != 0)
	    cout<<"No"<<endl;
	
	return 0;
}