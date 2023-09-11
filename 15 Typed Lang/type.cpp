#include <iostream>
#include <string>
using namespace std;

string api_call() {
    return "Data is coming through api call !!";
}

int another_api() {
    return 11;
}

int main() {
    auto call1 = api_call();
    auto call2 = another_api();
    cout << "Message from web : " << call1 << endl;
    cout << "Message from web2 : " << call2 << endl;

    if(typeid(call1) == typeid(int)) {
        puts("Type of both id matches ! \n");
    } else {
        puts("No matches  \n");
    }

    return 0;   // if we don't return anything at the end of the program then, C++ compilers generally inserts an implicit return 0; 
}
