#include <iostream>
using namespace std;
int fun(int x)
{

    if (x == 1)
    {
        return 0;
    }
    return (1 + fun(x / 2));
}
int main()
{
    int a;
    int i = 1;
    while (i == 1)
    {

        cout << "Enter the intial value of a:" << endl;
        cin >> a;
        if (a == 0)
        {
            break;
        }
        cout << "the last value of a is :" << fun(a) << endl<<endl;
    }

    return 0;
}