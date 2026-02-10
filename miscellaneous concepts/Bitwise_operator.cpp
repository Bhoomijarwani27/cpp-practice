#include <iostream>
using namespace std;
int main(){
    // bitwise  &  and 
    int a = 4, b= 8;
    cout << (a & b) << endl;  // 0 because of binary no  
    // bitwise | or 
    cout << (a | b) << endl; // 12 it will add 8 + 4  binary also 
    // bitwise ^  xor 
    cout << (a ^ b) << endl; 
    // bitwise << left shift 
    cout << (4 << 1) << endl; 
    //bitwise >> right shift 
    cout << (4 >>1) << endl;


return 0;     
}