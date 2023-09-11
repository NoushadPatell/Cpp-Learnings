#include <iostream>
using namespace std;

// A "for" loop in C++ is a control structure that allows you to repeatedly execute a block of code while 
// a specified condition is true
int main() {
    // int my_nums[] = {2, 3, 4, 5, 6};

    // for(int i = 0; i <= 4; i++) {
    //     cout << "Current No :" << my_nums[i] << endl;
    // }
    // cout << "out of the loop !" << endl;

    char my_char_string[] = "array of characterss";     // A character array of strings. and it includes a null terminator at the end.
    // cout << my_char_string << endl << typeid(my_char_string).name() << endl;
    // cout << my_char_string[19] << endl;     // It will print 19th index's element from the array of string which is second last element s and last element is null character.

    char my_name[] = {'n', 'o', 'u', 's', 'h', 'a', 'd', 0};
    // cout << my_name << endl;
    // cout << typeid(my_name).name() << endl;

    // for(int i = 0; i < my_char_string[i] != 0; i++) {   // it will check the condition as long as it becomes false which means as long as it trigers the null character.
    //     cout << my_char_string[i] << endl;
    // }

    // Interesting For Loop Concept
    // for(int i = 0; my_name[i]; i++) {    // Here every non-zero value is considered 'true,' whereas a value of 0 is considered 'false.' hence it will loop through the array of characters untill it finds 0.
    //     cout << my_name[i] << endl;
    // }

    // Looping through a pointer
    // for(char *cp = my_name; *cp; *cp++) {
    //     cout << "Character is : " << *cp << endl;
    // }

    // looping through for each loop
    for(char i:my_name) {
        if(i == 0) break;
        cout << i << endl;
    }

    return 0;
}  