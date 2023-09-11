#include <iostream>
using namespace std;

// Preprocessor directive that defines a symbolic constant named "pie" with a value of 3.14
#define pie 3.14 


// Enumeration (enum) is a user-defined data type in C++ that consists of a set of named integer constants. It's a way to create symbolic names (enumerators) for a set of values, which can make your code more readable and maintainable compared to using plain integers.
enum MsOffice {
    BOLD,
    ITALIC = 5,
    UNDERLINE,
};

enum class TrafficLights: char {
    RED = 'S',
    GREEN = 'G',
    YELLOW = 'R'
};

int main() {
    int my_attributes = BOLD;
    cout << my_attributes << endl;
    
    TrafficLights light = TrafficLights::RED;
    cout << static_cast<int>(TrafficLights::RED) << endl;

    return 0;
}