#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int b= 20;

    cout << "post increment="<<(++a)<< endl; 
    cout << "post decrement="<<(a++) << endl; 
    cout <<"pre increment="<<(--a) << endl;
    cout << "pre decrement="<<(a--) << endl; 
    

    return 0;
}