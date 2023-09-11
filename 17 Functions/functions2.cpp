#include <iostream>
using namespace std;

float addMe(float a, float b) {
    return a + b;
}

int addMe(int a, int b) {
    return a + b;
}

int main() {
    int a = 5;
    int b = 20;
    float c = 2.33;
    float d = 4.44;
    cout << addMe(c, d) << endl; 

    return 0;
}