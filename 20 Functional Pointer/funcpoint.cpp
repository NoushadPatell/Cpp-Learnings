#include <iostream>
using namespace std;

int getTwo() {
    return 2;
}

void interesting() {
    puts("I am interesting");
}

int main() {
    int whatIGot = getTwo();

    void (*pointsto)() = interesting;

    cout << whatIGot << endl;
    
    pointsto();
    (*pointsto)();

    return 0;
}