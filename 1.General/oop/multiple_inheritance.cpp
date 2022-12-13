#include <iostream>
using namespace std;

/*
syntax for inheritance in multiple inheritance
class derived:visibility-mode base1,visibility-mode base 2
{
    class body of class "DerivedC"
};
*/
class base1
{
    protected : int base1int;

public:
    void set_base1int(int a)
    {
        base1int = a;
    }
};
class base2
{

protected:
    int base2int;

public:
    void set_base2int(int a)
    {
        base2int = a;
    }
};

class derived : public base1,public base2{

    public:
    void show(){
        cout<<"the value of base1 is "<<base1int<<endl;
        cout<<"the value of base2 is "<<base2int<<endl;
        cout<<"the sum of these values is "<<base1int+base2int<<endl;
    }
};
int main()
{
    derived harry;
    harry.set_base1int(23);
    harry.set_base2int(90);
    harry.show();
    return 0;
}