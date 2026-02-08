#include <iostream>
using namespace std;
void hello(){ // void when it just print statement 
        cout << "hello world!";
    }
int value(){
    return 3;
}    
int main(){
    hello();
    int val = value();
    cout << "val" << val<< endl;

return 0;     
}