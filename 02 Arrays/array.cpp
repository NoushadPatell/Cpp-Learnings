#include <iostream>
using namespace std;

int main() {
    // int integer_array[4] = {0, 1, 2, 3};        // array declaration as well as initialization.
    // cout << integer_array[3] << endl;           // printing value at the index of 3 of the integer_array

    int another_array[3];
    another_array[0] = 11;  
    another_array[1] = 30;
    cout << another_array[0] << endl;

    *another_array = 29;    // another_array[0] = 29;
    cout << another_array[0] << endl;

    cout << another_array[1] << endl;
    int *ap = another_array;
    ap++;               // It will refer to another_array[1] as it is incremented by 1 so = 0 + 1 = index 1
    *ap = 39;           // Manipulate array index 1 and change tha value to 39
    cout << another_array[1] << endl;

    return 0;
}

// g++ array.cpp -o array