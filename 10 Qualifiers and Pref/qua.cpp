#include <iostream>
using namespace std;

int game() {
    static int life = 3;
    return life = life + 1;
}

int main() {
    cout << "Hello There !" << endl;
    int life = 3;
    cout << "Total Life : " << life << endl;

    life = game();
    cout << "Congratulations, Total life extend to : " <<life << endl;

    life = game();
    cout << "another life added : " << life << endl;

    cout << "another life added : " << life << endl;
    return 0;
}