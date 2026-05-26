#include <iostream>
using namespace std;

int add(int a,int b)
{
   return a+b; 
}
int sub(int a,int b)
{
   return a-b; 
}
int mul(int a,int b)
{
    return a*b;
}
int div(int a,int b)
{
    return a/b;
}
    
int main()
{
int num1, num2, sum;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    sum = add(num1,num2);

    cout << "Sum = " << sum;

    return 0;
}
    
int main()
{
int num1, num2, ;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    sum = add(num1,num2);

    cout << "Sum = " << sum;

    return 0;
}