#include <iostream>
using namespace std;

int main() {
    int *myp;

    cout << myp << endl;

    try {
        myp = new int[100];
        cout << "Memory space allocated ! \n";

        
    } catch(...) {
        cout << "Err \n";
    }

    cout << myp << endl;
    delete[] myp;
    cout << myp << endl;

    return 0;
}