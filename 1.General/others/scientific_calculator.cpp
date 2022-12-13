#include <iostream>
#include <math.h>
using namespace std;

// For simple calculator
//  for addition
void add(float a, float b)
{
    cout << "The addition of " << a << " and " << b << " is " << a + b << endl<<endl;
}

// for subtraction
void sub(float a, float b)
{
    cout << "The subtraction of " << a << " and " << b << " is " << a - b << endl<<endl;
}

// for multiplication
void mul(float a, float b)
{
    cout << "The mulitiplication of " << a << " and " << b << " is " << a * b << endl<<endl;
}

// for divion
void div(float a, float b)
{
    cout << "The divison of " << a << " by " << b << " is " << a / b << endl<<endl;
}


void simple()
{

    int a;
    float num1, num2;

    cout << "Press: 1 for addition" << endl<<endl;
    cout << "Press: 2 for subtraction" << endl<<endl;
    cout << "Press: 3 for multiplication" << endl<<endl;
    cout << "Press: 4 for division" << endl<<endl;
    cin >> a;

    cout << "Enter the first number :" << endl<<endl;
    cin >> num1;
    cout << "Enter the second number:" << endl<<endl;
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
void scien()
{
    int n;
    float x, y, z;
    cout << "Press 1 to Returns the absolute value of x:" << endl<<endl;
    cout << "Press 2 to Returns the arccosine of x :" << endl<<endl;
    cout << "Press 3 to Returns the arcsine of x :" << endl<<endl;
    cout << "Press 4 to Returns the arctangent of x :" << endl<<endl;
    cout << "Press 5 to Returns the cube root of x :" << endl<<endl;
    cout << "Press 6 to Returns the value of x rounded up to its nearest integer :" << endl<<endl;
    cout << "Press 7 to Returns the cosine of x :" << endl<<endl;
    cout << "Press 8 to Returns the hyperbolic cosine of x :" << endl<<endl;
    cout << "Press 9 to Returns the value of Ex :" << endl<<endl;
    cout << "Press 10 to Returns ex -1 :" << endl<<endl;
    cout << "Press 11 to Returns the absolute value of a floating x :" << endl<<endl;
    cout << "Press 12 to Returns the positive difference between x and y :" << endl<<endl;
    cout << "Press 13 to Returns the value of x rounded down to its nearest integer :" << endl<<endl;
    cout << "Press 14 to Returns sqrt(x2 +y2) without intermediate overflow or underflow :" << endl<<endl;
    cout << "Press 15 to Returns x*y+z without losing precision :" << endl<<endl;
    cout << "Press 16 to Returns the highest value of a floating x and y :" << endl<<endl;
    cout << "Press 17 to Returns the lowest value of a floating x and y :" << endl<<endl;
    cout << "Press 18 to Returns the floating point remainder of x/y :" << endl<<endl;
    cout << "Press 19 to Returns the value of x to the power of y :" << endl<<endl;
    cout << "Press 20 to Returns the sine of x (x is in radians) :" << endl<<endl;
    cout << "Press 21 to Returns the hyperbolic sine of a double value :" << endl<<endl;
    cout << "Press 22 to Returns the tangent of an angle:" << endl<<endl;
    cout << "Press 23 to Returns the hyperbolic tangent of a double value :" << endl<<endl;
    cin >> n;

    switch (n)
    {
    case 1:
        cout << "Enter x to Returns the absolute value of x:" << endl;
        cin >> x;
        cout << "The absolute value of " << x << " is :" << abs(x) << endl<<endl;
        break;
    case 2:
        cout << "Enter x to Returns the arccosine of x :" << endl;
        cin >> x;
        cout << "The arccosine of " << x << " is :" << acos(x) << endl<<endl;
        break;
    case 3:
        cout << "Enter x to Returns the arcsine of x :" << endl;
        cin >> x;
        cout << "The arcsine of " << x << " is :" << asin(x) << endl<<endl;
        break;
    case 4:
        cout << "Enter x to Returns the arctangent of x :" << endl;
        cin >> x;
        cout << "The arctangent of " << x << " is :" << atan(x) << endl<<endl;
        break;
    case 5:
        cout << "Enter x to Returns the cube root of x :" << endl;
        cin >> x;
        cout << "The  cube root of " << x << " is :" << cbrt(x) << endl<<endl;
        break;
    case 6:
        cout << "Enter x to Returns the value of x rounded up to its nearest integer :" << endl;
        cin >> x;
        cout << "The value of " << x << " rounded up to its nearest integer is :" << ceil(x) << endl<<endl;
        break;
    case 7:
        cout << "Enter x to Returns the cosine of x :" << endl;
        cin >> x;
        cout << "The cosine of " << x << " is :" << cos(x) << endl<<endl;
        break;
    case 8:
        cout << "Enter x to Returns the hyperbolic cosine of x :" << endl;
        cin >> x;
        cout << "The hyperbolic cosine " << x << " is :" << cosh(x) << endl<<endl;
        break;
    case 9:
        cout << "Enter x to Returns the value of E^x :" << endl;
        cin >> x;
        cout << "The value of E^" << x << " is :" << exp(x) << endl<<endl;
        break;
    case 10:
        cout << "Enter x to Returns the value of e^x -1 :" << endl;
        cin >> x;
        cout << "The value of e^" << x << "-1is :" << expm1(x) << endl<<endl;
        break;
    case 11:
        cout << "Enter x to Returns the absolute value of a floating x :" << endl;
        cin >> x;
        cout << "The absolute value of a floating " << x << " is :" << fabs(x) << endl<<endl;
        break;
    case 12:
        cout << "Enter x and y to Returns the positive difference between x and y :" << endl;
        cin >> x >> y;
        cout << "The positive difference between " << x << " and " << y << " is :" << fdim(x, y) << endl<<endl;
        break;
    case 13:
        cout << "Enter x to Returns the value of x rounded down to its nearest integer :" << endl;
        cin >> x;
        cout << "The  value of " << x << " rounded down to its nearest integer is :" << floor(x) << endl<<endl;
        break;
    case 14:
        cout << "Enter x and y to Returns sqrt(x^2 + y^2) without intermediate overflow or underflow :" << endl;
        cin >> x >> y;
        cout << "The value of (" << x << "^2 + " << y << "^2) without intermediate overflow or underflow is :" << hypot(x, y) << endl<<endl;
        break;
    case 15:
        cout << "Enter x and y to Returns x*y+z without losing precision :" << endl;
        cin >> x >> y >> z;
        cout << "The value of " << x << "*" << y << "+z  without losing precision is :" << fma(x, y, z) << endl<<endl;
        break;
    case 16:
        cout << "Enter x and y to Returns the highest value of a floating x and y :" << endl;
        cin >> x >> y;
        cout << "The highest value of " << x << " and " << y << " is :" << fmax(x, y) << endl<<endl;
        break;
    case 17:
        cout << "Enter x and y to Returns the lowest value of a floating x and y :" << endl;
        cin >> x >> y;
        cout << "The lowest value of " << x << " and " << y << " is :" << fmin(x, y) << endl<<endl;
        break;
    case 18:
        cout << "Enter x and y to Returns the floating point remainder of x/y :" << endl;
        cin >> x >> y;
        cout << "The floating point remainder of " << x << "/" << y << " is :" << fmod(x, y) << endl<<endl;
        break;
    case 19:
        cout << "Enter x and y to Returns the value of x to the power of y :" << endl;
        cin >> x >> y;
        cout << "The value of " << x << " to the power of " << y << " is :" << pow(x, y) << endl<<endl;

        break;
    case 20:
        cout << "Enter x to Returns the sine of x (x is in radians) :" << endl;
        cin >> x;
        cout << "The sine of " << x << "(" << x << " is in radians) is :" << sin(x) << endl<<endl;

        break;
    case 21:
        cout << "Enter x to Returns the hyperbolic sine of a double value :" << endl;
        cin >> x;
        cout << "The hyperbolic sine of " << x << " is :" << sinh(x) << endl<<endl;

        break;
    case 22:
        cout << "Enter x to Returns the tangent of an angle:" << endl;
        cin >> x;
        cout << "The tangent of " << x << "deg angle is :" << tan(x)<< endl<<endl;

        break;
    case 23:
        cout << "Enter x to Returns the hyperbolic tangent of a double value :" << endl;
        cin >> x;
        cout << "The hyperbolic tangent " << x << " is :" <<tanh(x)<< endl<<endl;

        break;
    }
}
int main()
{
    int i = 1;
    int c;

    while (i = 1)
    {

        cout << "Enter 1 for simple calculator:" << endl
             << "Enter  2 for scientific calculator :" << endl
             << "Enter 3 to exit :" << endl<<endl;
        cin >> c;
        if (c < 3)
        {

            switch (c)
            {
            case 1:
                simple();
                break;
            case 2:
                scien();
                break;
            }
        }
        else
        {
            break;
        }
    }

    return 0;
}