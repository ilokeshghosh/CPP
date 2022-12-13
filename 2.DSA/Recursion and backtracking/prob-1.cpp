#include <iostream>
using namespace std;
int fun(int x, int y)
{
    // cout << "The value of x is :" << x << " and value of y is :" << y  << endl;
    if (x == 0)
    {
        return y;
    }
    return fun(x - 1, x + y);
}
int main()
{
    int a = 5, b = 2;
    int c=5/2;
    fun(a, b);
    cout << "The end value of b is " << fun(a, b)<<endl;
    cout<<c;
    return 0;
}