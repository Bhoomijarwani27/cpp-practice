#include <iostream>
using namespace std;

/*
    DATA TYPE MODIFIERS IN C++

    A modifier is a keyword that changes the size or range
    of a basic data type.

    Common modifiers:
    1. short
    2. long
    3. unsigned
    4. signed
*/

int main() {

    // Base data type
    int normalInt = 10;

    // short modifier (smaller range than int)
    short int shortInt = 20;

    // long modifier (larger range than int)
    long int longInt = 300000;

    // unsigned modifier (only positive values)
    unsigned int unsignedInt = 40;

    // signed modifier (can store positive and negative)
    signed int signedInt = -50;

    // Display values
    cout << "Normal int: " << normalInt << endl;
    cout << "Short int: " << shortInt << endl;
    cout << "Long int: " << longInt << endl;
    cout << "Unsigned int: " << unsignedInt << endl;
    cout << "Signed int: " << signedInt << endl;

    // Showing memory size using sizeof()
    cout << "\nMemory Size (in bytes):" << endl;
    cout << "int: " << sizeof(normalInt) << endl;
    cout << "short int: " << sizeof(shortInt) << endl;
    cout << "long int: " << sizeof(longInt) << endl;
    cout << "unsigned int: " << sizeof(unsignedInt) << endl;

    return 0;
}
