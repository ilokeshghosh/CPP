#include <iostream>
using namespace std;

class base
{
public:
    int var1;
    void display()
    {
        cout << "Displaying base class variable var_base " << var1 << endl;
    }
};

class derived : public base
{
public:
    int var2;
    void display()
    {
        cout << "Displaying derived class variable var_derived" << var2 << endl;
    }
};
int main()
{
    base *base_pointer;
    base base_a;
    derived derived_a,derived_b;
    base_pointer = &derived_a; // base class pointer pointing  to derived class
    base_pointer->var1 = 34;//(*base_pointer).var1=34;
     //base_pointer->var2=10;//will throw an error
    base_pointer->display();

   /* derived * derived_pointer;
    derived_pointer = &derived_b;
    derived_pointer->var2= 53;
    derived_pointer->display();
*/

    return 0;
}