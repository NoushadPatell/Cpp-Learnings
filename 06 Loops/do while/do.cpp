#include <iostream>
using namespace std;

int main() {
    // Do while loop
    int my_number2[] = {1, 2, 3};
    int ii = 0;

    // Do while will atleast run the loop once even if condition is false initially.
    do{
        cout << "current no : " << my_number2[ii] << endl;
        ii++;
    } while (ii <= 2);
    

    return 0;
}

// g++ do.cpp -o do