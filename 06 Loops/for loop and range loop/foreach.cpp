#include <iostream>
using namespace std;

int main() {
    int my_nums[] = {10,20,30,40};

    for(int i: my_nums) {
        cout << i << endl;
    }

    return 0;
}