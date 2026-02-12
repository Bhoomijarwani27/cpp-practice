#include <iostream>
using namespace std;

int x = 100;   // Global

int main() {
    int x = 50;   // Local
    
    cout << x << endl; // Access local variable
    cout << ::x;   // Access global variable
    
    return 0;
}
