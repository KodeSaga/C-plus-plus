//[Complete] Daily Coding Challenge  - #85
#include <iostream>
#include<vector>
using namespace std;
int main() {
    unsigned int x,y,b,answer;
    cin >>x>> y >> b;

    // method 1 - Mathematical 
    answer = (b*x) - ((b-1) * y);
    cout << "method 1 -- " << answer << endl;

    // method 2 - Logical
    // answer = b ? x : y
    b && (answer = x);
    !b && (answer = y);
    cout << "method 2 -- " << answer << endl;

    b = !b - 1; // making all bits 0 if b is 0 , all bits 1 if b is 1 ( -1 will get stored in 2 complements notation)

    // method 3 - Bitwise 
    answer = (b & x) | (~b & y);  
    cout << "method 3 -- " << answer << endl;

    // method 4 - Bitwise
    // ( x ^ y ) ^ x = y ,  ( x ^ y ) ^ y = x
    answer = (y ^ (b & (x ^ y)));
    cout << "method 4 -- " << answer << endl;

    return 0;
}