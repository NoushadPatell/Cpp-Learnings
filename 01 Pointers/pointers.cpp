// #include <iostream>
// using namespace std;

// int main() {
//     int life;
//     life = 4;

//     int card;
//     card = 40;
//     int my_card = card;

//     int *myp;           // Declaring a pointer
//     myp = &my_card;     // storing address of my_card variable in myp

//     my_card = *myp;     // Pointer dereference

//     cout << "Value of my_card is " << my_card << endl;
//     cout << myp << endl;
//     cout << my_card << endl;

//     return 0;
// }

// For compiling the program and making an executable file names as pointers.
// g++ pointers.cpp -o pointers



// # References.

#include <iostream>
using namespace std;

int main() {
    int score = 200;
    int *myp = &score;

    printf("Value of score is %d\n", score);
    printf("Value of pointer which points to the address of variable score is %p\n", myp);

    // References.....
    int &reference_score = score;
    reference_score = 400;

    printf("Value of score is %d\n", score);
    printf("Value of pointer which points to the address of variable score is %p\n", myp);

    return 0;
}