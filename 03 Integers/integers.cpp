#include <iostream>
using namespace std;

/*
    Types Of Integers : 
    1) short int,   2) int,     3) long int,    4) long long int
*/

int main() {
    // 1 byte is of 8 bits
    // int is of 4 bytes which is equal to 32 bits
    // char is of 1 byte which is equal to 8 bits
    // short int is of 2 bytes which is equal to 16 bits
    // long int is of 8 bytes which is equal to 64 bits
    // long long int is of 8 bytes which is equal to 64 bits
    printf("Size of this data type is %ld\n", sizeof(long long int));

    return 0;
}

// g++ integers.cpp -o integers