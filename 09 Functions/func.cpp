#include <iostream>
using namespace std;

void sayHello() {
    puts("Hello There !");
};

int sayTwo() {
    return 2;
}

void sayThree() {
    puts("3");
}

int main() {
    // sayHello();
    // cout << sayTwo() << endl;      // Now it will print 2.
    // sayThree();

    int x = 7;
    int y = 4;
    y = x;

    cout << y <<endl << sizeof(y) * 8 << endl;

    return 0;
}