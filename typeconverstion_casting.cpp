#include <iostream>
using namespace std;
int main(){
    // casting [explicit] happen manually  small -> big
    // coversion [implicit] happen automatially big -> small    
char grade = 'a';
int value = grade;
cout << value <<'\n'; // print the value of a in no 
return 0;     
}