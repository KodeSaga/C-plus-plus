//Problem statement - https://www.codechef.com/COOK103B/problems/TABLET/
#include <iostream>
#include<fstream>
using namespace std;

int main() {
    ifstream infile("input.txt");
    ofstream outfile("output.txt");
    int t,n,b,i,j,w,h,p;
    int maxsize, price;
    infile >> t;
    for(i=0;i<t;i++) {
        infile >> n >> b;
        maxsize = 0;
        price = 0;
        for(j=0;j<n;j++) {
            infile >> w >> h >> p;
            if ((((w*h)>maxsize) && (p<=b)) || (((w*h)==maxsize) && (p<price))){
                maxsize = w*h;
                price = p;
            }  
        }
        if(maxsize>0)
            outfile << maxsize << endl;
        else
            outfile << "no tablet" << endl;
    }
    infile.close();
    outfile.close();
	return 0;
}