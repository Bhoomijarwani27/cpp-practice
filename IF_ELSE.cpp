#include <iostream>
using namespace std;
int main(){
int age;
cout << "Enter your age: ";
cin >> age ;
if ( age >= 18 && age < 60){
    cout << " your movie ticket is 250rs "<<"\n";
} else if (age <= 10){
    cout << "your movie tickect is 100rs"<<"\n";
} else 
    cout << "your movie ticket is 150rs" <<"\n";

return 0;     
}