#include <iostream>
using namespace std;

/*
Case 1:
class B:public A{
    //order of execution of constructor -> first A() then B()

};

Case 2:
class A:public B,public C{
    //Order of execution of constructor -> B() then C() and A()
};

Case 3:
class A:public B,virtual public C{
    //Order of execution of constructor -> C() then B() and A()

};


*/
class base1
{
    int data1;
    int data2;

public:
    base1(int i, int j)
    {
        data1 = i;
        data2 = j;
        cout << "Base 1 class constructor called" << endl;
    }
    void print_data1(void)
    {
        cout << "The value of data1 is " << data1 << " and the value of data2 is " << data2 << endl;
    }
};

class base2
{

    int data3;
    int data4;

public:
    base2(int i, int j)
    {
        data3 = i;
        data4 = j;
        cout << "Base 2 class constructor is called" << endl;
    }
    void print_data2(void)
    {
        cout << "The value of data 3 is " << data3 << " and the value of data4 is " << data4 << endl;
    }
};

class derived : public base2, public base1
{
    int derived1, derived2;

public:
    derived(int a, int b, int c, int d, int e, int f) : base1(a, b), base2(c, d)
    {
        derived1 = e;
        derived2 = f;
        cout << "Derived class constructor called" << endl;
    }
    void print_data_derived(void)
    {
        cout << "The value of d is " << derived1 << " and value of c is " << derived2 << endl;
    }
};

int main()
{
    derived lokesh(8, 6, 2, 3, 7, 5);
    lokesh.print_data1();
    lokesh.print_data2();
    lokesh.print_data_derived();
    
    return 0;
}
