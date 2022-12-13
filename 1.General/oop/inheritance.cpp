// Single inheritance: A derived class with only one base class
// Multiple inheritance : a derived class with more than one Base class
// Hierarchical inheritance : Several derived classes from a single base class
// Multilevel inheritance : Deriving a class from already derived class
// Hybrid inheritance: It is a combination of more than one type of inheritance
// For harry Hybrid inheritance is a combination of mutiple inheritance and multilevel inheritance

// Derived class syntax

/*class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc....
}
Notes:

    1.Default visibility mode is private
    2.Private visibility mode : Public members of the base class becomes private members of the derived class
    3.Public visibility mode :  Public members of the base class becomes public members of the derived class
    4.Private members are never inherited
*/

#include <iostream>
using namespace std;

class employee
{
public:
    int id;
    int salary;
    employee(int empid)
    {
        id = empid;
        salary = 50000;
    }
    employee()
    {
        cout<<"Hi"<<endl;
    }
};

class programmer : public employee
{

public:
    int languagecode;

    programmer(int empid)
    {
        id = empid;
        languagecode = 9;
    }
    void getdata()
    {
        cout << id << endl;
    }
};

int main()
{
    employee e1(1);
    cout << "The salary of employee 1 is :" << e1.salary << endl;

    programmer skillf(1);
    cout<<skillf.id<<endl;
    skillf.getdata();
    cout << skillf.languagecode << endl;

    return 0;
}