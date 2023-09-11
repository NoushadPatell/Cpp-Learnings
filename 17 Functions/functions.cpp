#include <iostream>
using namespace std;

// call by value func
void lifeUp1(int life1) {
    ++life1;
} 

// call by reference func
void lifeUp2(int &life2) {
    ++life2;
}

int main() {
    // call by value 
    int life1 = 3;
    lifeUp1(life1);
    cout << life1 << endl;   // 3

    // call by reference 1
    // int life2 = 5;
    // lifeUp2(&life2);
    // cout << life2 << endl;

    // call by reference 2
    int life2 = 5;
    lifeUp2(life2);
    cout << life2 << endl;

    return 0;
}