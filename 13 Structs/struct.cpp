#include <iostream>
using namespace std;

struct User{
    const int uId;
    const char *name;   // name is assigned the address of the first character in the string, effectively making it point to the entire string.
    const char *email; 
    int course_count;

    User() : uId(0), name(""), email(""), course_count(0) {};
};

int main() {

    // User noushad = {100, "Noushad", "noushadpatel@592@gmail.com", 3};
    // User sumanth = {101, "Sumanth", "don@592@gmail.com", 1};

    // cout << noushad.email << endl;
    // cout << sumanth.name << endl;

    User Neople[2];

    Neople[0].name = "Noushad";
    Neople[0].email = "noushadpatel592@gmail.com";

    Neople[1].name = "Sumant";
    Neople[1].email = "parthe@123.com";

    for(int i = 0; i < 2; i++) {
        cout << "Name is " << Neople[i].name << " and the email id is " << Neople[i].email << endl;
    }

    // cout << Neople[0].name << endl;

    return 0;
}