#include <iostream>
using namespace std;

int main() { 
    int rating;
    cout << "Rate the service out of 5 star !!";
    cin >> rating;

    if(rating == 5) {
        cout << "5 star rated !!" << endl;
    } else if(rating == 4) {
        cout << "4 Star rated !" << endl;
    } else {
        cout << "No 4 or 5 star ratings !!" << endl;
    }

    if(1) {
        cout << "Go for it !!" << endl;
    }

    cout << "Your rating feedback is: " << ((rating >= 3 && rating <= 5) ? "Great feedback": "Not that great") <<endl;

    return 0;
}