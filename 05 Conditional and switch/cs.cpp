#include <iostream>
using namespace std;

int main() {
    int rating;
    cout << "Give us rating between 1 - 5 : ";
    cin >> rating;
    switch(rating) {
        case 1:
            cout << "Rated as 1 star " << endl;
            break;

        case 2:
            cout << "Rated as 2 star " <<endl;
            break;

        case 3:
            cout << "Rated as 3 star " << endl;
            break;

        case 4:
            cout << "Rated as 4 star " << endl;
            break;

        case 5:
            cout << "Rated as 5 star " << endl;
            break;

        default:
            cout << "No such ratings !!" << endl;
            break;
    }

    return 0;
}

// g++ cs.cpp -o cs