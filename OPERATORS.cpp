#include <iostream>
using namespace std;
int main(){
int a = 10;
int b = 2;
//arithmetic 
cout << a + b << "\n"; //sum
cout << a - b << "\n";//difference
cout << a / b << "\n";//division 
cout << a % b << "\n"; // modulo
cout << a * b << "\n"; // multiple

// relation 
cout <<"relation operator " <<"\n";
cout << (a < b) << "\n";
cout << (a > b) << "\n";
cout << (a <= b) << "\n";
cout << (a != b) << "\n";
cout << (a == b) << "\n";

// logical  || or , && and ! not 
cout << "logical operator " << "\n";
cout << !(a < b) << "\n";
cout << ((a < b) || (a > 8)) << "\n";
cout << ((a < b) && (a > 8)) << "\n";
// unary operator  ++ , --
cout << "unary operator" << "\n";
cout << a++ << "\n"; //10 
cout << a << "\n"; // 11
cout << a-- << "\n"; // 11
cout << a << "\n"; //10
cout << ++a << "\n"; //11
cout << --a << "\n"; //10

return 0;     
}