#include <iostream>
using namespace std;

void fun(int n)
{
    if (n == 0)
    {
        return;
    }
    fun(n / 2);
    cout << n % 2;
}
using namespace std;
int main()
{
    int a;
    cout << "Enter the number :" << endl;
    cin >> a;
    fun(a);
    return 0;
}