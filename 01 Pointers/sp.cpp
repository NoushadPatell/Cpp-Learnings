// #include <iostream>     // Header file
// using namespace std;

// int main() {
//     // std::cout <<"Hello World \n";   // one way of terminating a line :- \n
//     // cout << "Hello World\n" << endl;   // another way of breaking a line :- << std:: endl;

//     int number;     //variable declaration
//     cin >> number;
//     printf("Your id is %d\n", number + 3);

//     return 0;
// }

// For compiling the file and making an executable file in sp
// g++ sp.cpp -o sp


// picking fav color program.
// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     string my_color;
//     cout << "Enter Your Fav Color : \n";
//     // getline(cin, my_color);      // modern way of taking input
//     cin >> my_color;                // normal way of taking input
//     cout << "Hey " << my_color << " is my fav, too \n";

//     return 0;
// }





#include <iostream>
#include <string>
using namespace std;

int main() {
    string first_name;
    string last_name;
    cout << "Hey enter your first name : ";
    cin >> first_name;
    cout << "Hey enter your last name : ";
    cin >> last_name;
    cout << "Your full name is " << first_name << " " << last_name << endl;

    return 0;
}