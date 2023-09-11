#include <iostream>
using namespace std;

int main() {
    int life = 3;
    int points = 4;
    int score = 2;

    // score = score + points; 
    score /= points;

    if(life != 3) {
        puts("Correct");
    }

    cout << score << endl;

    return 0;
}
