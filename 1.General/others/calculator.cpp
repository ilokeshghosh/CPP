#include <iostream>
using namespace std;

// for addition
void add(float a, float b)
{
    cout << "The addition of " << a << " and " << b << " is " << a + b << endl;
}

// for subtraction
void sub(float a, float b)
{
    cout << "The subtraction of " << a << " and " << b << " is " << a - b << endl;
}

// for multiplication
void mul(float a, float b)
{
    cout << "The mulitiplication of " << a << " and " << b << " is " << a * b << endl;
}

// for divion
void div(float a, float b)
{
    cout << "The divison of " << a << " by " << b << " is " << a / b << endl;
}

void simple(){

}
void scien(){
    
}

int main()
{
    
    int c;
    cout<<"Enter 1 for simple calculator:"<<endl<<" Enter  2 for scientific calculator :"<<endl;
    cin>>a;

    
    int a;
    float num1, num2;
    int i = 1;

    while (i = 1)
    {

        cout << "Press: 1 for addition" << endl;
        cout << "Press: 2 for subtraction" << endl;
        cout << "Press: 3 for multiplication" << endl;
        cout << "Press: 4 for division" << endl;
        cout << "Press: 5 to exit" << endl;
        cin >> a;

        if (a != 5 && a < 5)
        {

            cout << "Enter the first number :" << endl;
            cin >> num1;
            cout << "Enter the second number:" << endl;
            cin >> num2;

            switch (a)
            {
            case 1:
                add(num1, num2);
                break;
            case 2:
                sub(num1, num2);
                break;
            case 3:
                mul(num1, num2);
                break;
            case 4:
                div(num1, num2);
                break;
            }
        }
        else
        {
            goto end;
        }
    }

end:

    return 0;
}