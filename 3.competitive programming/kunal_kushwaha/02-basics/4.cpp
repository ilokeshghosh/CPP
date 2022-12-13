// Take in two numbers and an operator (+, -, *, /) and calculate the value. (Use if conditions)

#include <iostream>
using namespace std;
int main()
{
    int a, b;
    char c;

    cout << "Enter the two number :" << endl;
    cin >> a >> b;
    cout << "Choose a operator (+,-,*,/) :" << endl;
    cin >> c;

    if (c == '+')
    {
        cout << "The final value is :" << a + b;
    }
    else if (c == '-')
    {
        cout << "The final value is :"<<a-b;
    }
    else if(c=='*'){
        cout<<"The final value is :"<<a*b;
    }
    else if(c=='/'){
        cout<<"The final value is :"<<a/b;
    }

    return 0;
}