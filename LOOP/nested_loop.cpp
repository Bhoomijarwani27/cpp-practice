#include <iostream>
using namespace std;
int main(){
int n= 5;
int i = 1;
for (i = 1;i<=5;i++){
    for (int j = 0; j < i; j++){
        cout << "*";
    }
    cout << endl;
}
return 0;     
}