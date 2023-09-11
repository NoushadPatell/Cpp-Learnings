#include <iostream>
using namespace std;

int main() {
    char call_api = 'n';
    try {
        cout << "Trying to use api value ! \n";
        throw call_api;
        cout << "No code execute after return and throw";
    } catch(int x) {
        cout << "Integer exception handled \n";
    } catch(float y) {
        cout << "Float exception handled \n";
    } catch(...) {
        cout << "Something went wrong ! \n";
    };

    cout << "Keep on moving with rest of code. \n";

    return 0;
}