#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex()
    {
        a = 1;
        
    }
    complex(int x)
    {
        a = x;
        b = 5;
    }
    complex(int x, int y)
    {
        a = x;
        b = y;
    }
    void print(void)
    {

        cout << "The number is : " << a << "+ " << b << "i"<<endl;
    }
};

int main()
{

    complex a;
    a.print();

    complex b(1);
    b.print();

    complex c(3, 4);
    c.print();
}