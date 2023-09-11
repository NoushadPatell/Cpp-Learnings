#include <iostream>
using namespace std;

template<typename T>
T addTwo(T a, T b) {
    return a + b;
}

int main() {
    float a = 44;
    float b = 3.33;
    cout << addTwo(a, b) << endl;

    return 0;
}