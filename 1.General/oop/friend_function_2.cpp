#include <iostream>
using namespace std;
class X;
class y;

class X
{
    

public:
    int data;
    void setvalue(int value)
    {
        data = value;
    }
    friend void add(X, y);
};
class y
{
    

public:
    int data;
    void setvalue(int value)
    {
        data = value;
    }
    friend void add(X, y);
};
void add(X o1, y o2)
{
    cout << "The summation of two numbers are " << o1.data + o2.data << endl;
}

int main()
{
    X a1;
    y b1;
    a1.setvalue(5);

    b1.setvalue(2);
    add(a1, b1);
}