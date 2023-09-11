#include <iostream>
using namespace std;

// Exercise 1: Have to create a simple program which takes rating as input and has some certain conditions  for rating like rating has to be below 5 and cannot exceed that and atleast rating has to be 1, zero is not accepted.
int main() {
    int rating;
    cout << "Give rating out of 5 !" << endl;
    cin >> rating;

    if(rating == 0 || rating > 5) {
        cout << "Sry sir, but you can't give rating which includes 0 and exceeds 5 !!" << endl;
        cout << "Try again : ";
        cin >> rating;
        if (rating == 0 || rating > 5)
        {
            cout << "Sry sir, but you can't give rating which includes 0 and exceeds 5 !!" << endl;
            cin >> rating;
            if (rating == 0 || rating > 5) {
                cout << "Fuck OFF !!" << endl;
            } else {
                cout << "Rating : " << rating <<endl;
            }
        } else {
            cout << "Rating : " << rating << endl;
        }
        
    } else {
        cout << "Rating : " << rating << endl;
    }

    return 0;
}