#include <iostream>
#include <math.h>

using namespace std;

class simplecalculator
{
    float a;
    float b;
    float c;

public:
    float getvalue();
    void setvalue(float, float);
    float add();
    float sub();
    float mul();
    float div();
    void display();
};
void simplecalculator ::setvalue(float num1, float num2)
{
    a = num1;
    b = num2;
}
float simplecalculator::getvalue()
{
    return a, b;
}
float simplecalculator ::add()
{

    c = a + b;

    return c;
}
float simplecalculator::sub()
{
    c = a - b;
    return c;
}
float simplecalculator ::mul()
{
    c = a * b;
    return c;
}
float simplecalculator ::div()
{
    c = a / b;
    return c;
}
void simplecalculator::display()
{
    cout << "The inserted numbers are " << a << "and " << b << endl;
    cout << "The addition of the two given number is  " << add() << endl;
    cout << "The subtraction of the two given number is " << sub() << endl;
    cout << "The multiplication of the two given number is " << mul() << endl;
    cout << "The division of the two given number is " << div() << endl;
}

// Scientific calculator
class sciencal
{
    float a;
    float b;
    float c;
    float d;

public:
    void setvalue(float, float);
    float exp();
    float sine();
    float cose();
    float tane();
    void display();
};

void sciencal::setvalue(float num1, float num2)
{
    a = num1;
    b = num2;
}
// float sciencal:: exp(){
//     int m;
//     cout<<"Enter the power: "<<endl;
//     cin>>m;
//     c=pow(a,m);
//     d=pow(b,m);
//     return c,d;
// }
float sciencal ::sine()
{
    c = sin(a);
    d = sin(b);
    return d,c;
}
// float sciencal :: cos(){

// }
// float sciencal ::

void sciencal ::display()
{
    cout << "The entered numbers are " << a << " And " << b << endl;
    cout << "The sin of two number is " << sine() <<sine()<< endl;
}
int main()
{
    float x, y, z;
    cout << "Enter 1st float number :" << endl;
    cin >> x;
    cout << "Enter 2nd float number : " << endl;
    cin >> y;
    // simplecalculator n1;
    // n1.setvalue(x,y);
    // n1.display();
    sciencal n1;
    n1.setvalue(x, y);
    n1.display();

    return 0;
}

/*
Problem statement::
        create 2 classes:
        1.Simplecalculator -
            takes input of 2 numbers using a utility function and performs +,-,*,/
            and display the results using another function.
        2.Scientificcalculator-takes input of 2 numbers using a utility function and performs any four scientific operation of your choice and display the results using another function.

        Create another class Hybridcalculator and inherit it using these 2 classes:

        Q1. What type of inheritace are you using?
        Q2. Which mode of inheritance are you using?
        Q3.Create an object of Hybridcalculator and display results of simple and scientific calculator.
        Q4.How is code reusability implemented?


*/