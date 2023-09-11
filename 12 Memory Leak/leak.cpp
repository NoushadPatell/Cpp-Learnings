#include <iostream>
using namespace std;

int main()
{
    int *myp;
    try
    {
        myp = new int[100]; // forcefully allocating memory
        cout << "Memory space allocater" << endl;
        for(int i = 0; i < 100; i++) {
            myp[i] = i + 1;
        }
        
        for(int i = 0; i < 100; i++) {
            cout << myp[i] << endl;
        }
    }
    catch(...)
    {   
        cout << "Failed in allocating memory \n";
    }

    delete[] myp;

    return 0;
}