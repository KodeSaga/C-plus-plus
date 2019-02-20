//[Complete]Problem statement - https://www.hackerrank.com/challenges/variable-sized-arrays/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,q,i,j;
    char k;
    vector<vector<int>> a;
    cin >> n >> q;
    for(int r=0;r<n;r++){
        cout << "test1 " << n <<" "<<q<<" "<< r <<endl;
        while((cin.peek()!='\n') && cin >> k){
            cout << "test " << k <<endl;
            a[r].push_back(k);
            cin >> k;
        }
    }
    for(int r=0;r<q;r++){
        cin >> i >> j;
        cout << a[i][j] <<endl;
    }
    
    return 0;
}




