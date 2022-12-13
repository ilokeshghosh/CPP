#include<iostream>
using namespace std;

class base
{
public:
    int var1;
    virtual void display()
    {
        cout << "Displaying base class variable var_base " << var1 << endl;
    }
};

class derived : public base
{
public:
    int var1;
    void display()
    {
        cout << "Displaying derived class variable var_derived" << var1 << endl;
    }
};
int main(){
    base * base_pointer;
    base base_a,base_b;
    derived derived_a,derived_b;

    base_pointer =&derived_a;
    base_pointer->var1=11;
    base_pointer->display();
    return 0;
}