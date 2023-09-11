#include <iostream>
using namespace std;

int main() {
    int val1 = 100;         // Declared and initialed variable val1.
    int *ptr = &val1;       // Created a pointer which holds address of val1.
    *ptr = 200;             // Using the address of val1 which is now stored in *ptr pointer, We can directly manipulate the actual value stored in val1 by assigning a new value as 400.

    int *ptrr = &*ptr;      // Created another pointer which holds the address of *ptr pointer which has an address of val1 variable.
    *ptrr = 400;            // Using the address of *ptr which is stored in *ptrr, We can directly manipulate the value of val1

    cout << "Value of val1 : " << val1 << endl;
    cout << "memory address of ptr : " << ptr << endl;    
    cout << "memory address of ptrr: " << ptrr << endl;

    // int val2 = 500;
    // int &ref = val2;
    // ref = 1000;

    // int *ptr2 = &ref;
    // int *ptr3 = &val2;

    // cout << "val2 value : " << val2 << endl;
    // cout << "ref value : " << ref << endl;
    // cout << "memory address of ref : " << ptr2 << endl;     // Memory Adress will be same of these as both of these are references of a single variable. 
    // cout << "memory address of val2: " << ptr3 << endl;     // Memory Adress will be same of these as both of these are references of a single variable.

    return 0;
}

// g++ array_p.cpp -o arrpointer