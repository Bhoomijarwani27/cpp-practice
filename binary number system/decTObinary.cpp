#include <iostream>
using namespace std;
int decTObinary(int decNum){
    int ans = 0, pow = 1;

    while(decNum>0){
        int rem = decNum %2;
        decNum /= 2;
        ans +=(rem * pow);
        pow *=10 ;   
    }
    return ans; //binary form 
}
int main(){
    int decNum = 50;
    cout << decTObinary(decNum) << endl;
  for(int i=1 ; i<10;i++){ // print 1 to 10 binary number 
    cout << decTObinary(i) << endl;
  }

return 0;     
}