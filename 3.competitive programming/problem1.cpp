#include <iostream>
using namespace std;
int main()
{

    int a, b;
    cout << "Enter the number :" << endl;
    cin >> a;
    while (int i = 1)
    {
        if (a % 10 != 0)
        {

            a -= 1;
            cout << "The output is :" << a << endl;
        }
        else
        {

            a /= 10;
            cout << "The output is :" << a << endl;
        }
    }
}