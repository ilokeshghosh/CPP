#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex(void);  //constructor declaration
    void print(void)
    {

        cout << "The inserted complex number is " << a << "+" << b << "i" << endl;

    }
};

complex :: complex(void) //This is default constructor as it take no paramater
{
    a=5;
    b=10;
}
int main()
{
    complex c1,c2;
    c1.print();
    c2.print();
}

/* properties of constructors

1.It should be declared in the public section of the class constructors
2. They are automatically invoked whenever the object is created
3.They cannot return values and  Do not have return types
4.It can have default arguments
5. We cannot refer to their address

*/
