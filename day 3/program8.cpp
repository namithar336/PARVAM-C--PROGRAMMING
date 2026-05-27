#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 5;

    
    if (a > 0 && b > 0) {
        cout << "Both numbers are positive" << endl;
    }

    if (a > 0 || b < 0) {
        cout << "At least one condition is true" << endl;
    }

    
    if (!(b < 0)) {
        cout << "b is not negative" << endl;
    }

    return 0;
}