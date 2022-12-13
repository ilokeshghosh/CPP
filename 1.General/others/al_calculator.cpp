#include <iostream>
#include <math.h>
using namespace std;

// For simple calculator
//  for addition
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

// For scientific calculator

void simple()
{

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
           break;
        }
    }


}
void scien()
{
    int n;
    int i=1;
    /*


    abs(x)	Returns the absolute value of x
    acos(x)	Returns the arccosine of x
    asin(x)	Returns the arcsine of x
    atan(x)	Returns the arctangent of x
    cbrt(x)	Returns the cube root of x
    ceil(x)	Returns the value of x rounded up to its nearest integer
    cos(x)	Returns the cosine of x
    cosh(x)	Returns the hyperbolic cosine of x
    exp(x)	Returns the value of Ex
    expm1(x)	Returns ex -1
    fabs(x)	Returns the absolute value of a floating x
    fdim(x, y)	Returns the positive difference between x and y
    floor(x)	Returns the value of x rounded down to its nearest integer
    hypot(x, y)	Returns sqrt(x2 +y2) without intermediate overflow or underflow
    fma(x, y, z)	Returns x*y+z without losing precision
    fmax(x, y)	Returns the highest value of a floating x and y
    fmin(x, y)	Returns the lowest value of a floating x and y
    fmod(x, y)	Returns the floating point remainder of x/y
    pow(x, y)	Returns the value of x to the power of y
    sin(x)	Returns the sine of x (x is in radians)
    sinh(x)	Returns the hyperbolic sine of a double value
    tan(x)	Returns the tangent of an angle
    tanh(x)	Returns the hyperbolic tangent of a double value



    */
while (i=1)
{
    /* code */


    cout<<"Press 1 to Returns the absolute value of x:"<<endl;
    cout<<"Press 2 to Returns the arccosine of x :"<<endl;
    cout<<"Press 3 to Returns the arcsine of x :"<<endl;
    cout<<"Press 4 to Returns the arctangent of x :"<<endl;
    cout<<"Press 5 to Returns the cube root of x :"<<endl;
    cout<<"Press 6 to Returns the value of x rounded up to its nearest integer :"<<endl;
    cout<<"Press 7 to Returns the cosine of x :"<<endl;
    cout<<"Press 8 to Returns the hyperbolic cosine of x :"<<endl;
    cout<<"Press 9 to Returns the value of Ex :"<<endl;
    cout<<"Press 10 to Returns ex -1 :"<<endl;
    cout<<"Press 11 to Returns the absolute value of a floating x :"<<endl;
    cout<<"Press 12 to Returns the positive difference between x and y :"<<endl;
    cout<<"Press 13 to Returns the value of x rounded down to its nearest integer :"<<endl;
    cout<<"Press 14 to Returns sqrt(x2 +y2) without intermediate overflow or underflow :"<<endl;
    cout<<"Press 15 to Returns x*y+z without losing precision :"<<endl;
    cout<<"Press 16 to Returns the highest value of a floating x and y :"<<endl;
    cout<<"Press 17 to Returns the lowest value of a floating x and y :"<<endl;
    cout<<"Press 18 to Returns the floating point remainder of x/y :"<<endl;
    cout<<"Press 19 to Returns the value of x to the power of y :"<<endl;
    cout<<"Press 20 to Returns the sine of x (x is in radians) :"<<endl;
    cout<<"Press 21 to Returns the hyperbolic sine of a double value :"<<endl;
    cout<<"Press 22 to Returns the tangent of an angle:"<<endl;
    cout<<"Press 23 to Returns the hyperbolic tangent of a double value :"<<endl;
    cout<<"Press 24 to exit :"<<endl;
    break;

}
}


int main()
{

    int c;
    cout << "Enter 1 for simple calculator:" << endl
         << " Enter  2 for scientific calculator :" << endl;
    cin >> c;

    switch (c)
    {
    case 1:
        simple();
        break;
    case 2:
        scien();
        break;

    default:
        break;
    }

    return 0;
}