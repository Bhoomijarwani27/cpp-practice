#include <iostream>
using namespace std;
int main(){
   int sum = 0;
   int n;
   cout << "Enter n number for sum: ";
   cin >> n;
   for(int a = 0; a<=n; a++) {
    sum += a;
    }
    cout << sum << endl; 
    return 0;     
}        