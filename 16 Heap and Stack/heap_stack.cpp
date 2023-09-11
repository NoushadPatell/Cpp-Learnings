#include <iostream>
using namespace std;

struct User {
    const int id;
    char *name;

    User() : id(001), name("Noushad"){};
};

int main() {
    // stack
    int score = 5;
    User nosh;

    // heap
    int* heap_score = new int;
    *heap_score = 300;

    User* sum = new User();
    delete heap_score;
    delete sum;

    return 0;
}