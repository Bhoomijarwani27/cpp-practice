#include <iostream>
using namespace std;
int main(){
// check letter lower or uper
char ch;
cout << " enter the char: ";
cin >>ch;
cout << (ch >= 65 && ch <= 90? "upercase":"lowercase"); 
return 0;     
}
// also can use a to z between 