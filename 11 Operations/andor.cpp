#include <iostream>
using namespace std;

int main() {
    bool is_signed_in = false;
    bool is_admin = true;

    // && Operator
    if(is_admin && is_signed_in) {
        cout << "Welcome Sir." << endl;
    } else {
        cout << "No access" << endl;
    }

    bool sign_in_google = true;
    bool sign_in_facebook = false;

    // || operator 
    if(sign_in_google || sign_in_facebook) {
        cout << "Signed in successfully !" << endl;
    } else {
        cout << "Kindly create an accout" << endl;
    }

    // both || and && operator example
    if((sign_in_google || sign_in_facebook) && is_admin) {
        printf("Permision granted to enter the office ! \n");
    } else {
        printf("No permision to enter office \n");
    }

    return 0;
}