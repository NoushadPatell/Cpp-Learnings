#include <iostream>
using namespace std;

int main() {

    // while loop
    int my_number[] = {1,2,3,4,5,6,3,4};
    int i = 0;
    // A while loop is a post-check loop because it checks the condition after executing the loop body. If the condition is false initially, the loop body is never executed.
    while(i < 7) {
        if(i == 4) {
            // cout << "Checking if statement here !!. sry for interuption !!!" << endl;
            // break;      // I wanna stop iterating the loop once it hits to 4th iteration.
            i++;
            continue;
        }
        cout << "Current number is : " << my_number[i] << endl;
        i = i + 1;      // alternative to this : i++
    }
    cout << "Out of the loop !" << endl;


    return 0;
}

// g++ while.cpp -o whileD