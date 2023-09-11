#include <iostream>
using namespace std;

int main() {
    float my_float_value = 20.2 + 20.2;
    cout << "My value is : " << my_float_value << endl;
    printf("value is : %1.70f \n", my_float_value);

    if(my_float_value == 40.4000) {   // If I had given condition of 40.2 then it would have printed statement of else block.
        printf("You are correct \n");   
    } else {
        printf("There's a catch in it ! \n");
    }

    return 0;
}