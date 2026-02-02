#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    int n;
    int i = 1;

    cout << "Enter the number: ";
    cin >> n;

    do {
        if (i % 2 != 0) {   // check odd
            sum = sum + i; // add odd number
        }
        i++;
    } while (i <= n);

    cout << "Sum of odd numbers = " << sum;

    return 0;
}
