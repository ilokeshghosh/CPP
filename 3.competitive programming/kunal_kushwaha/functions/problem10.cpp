#include <iostream>
using namespace std;
void pal(int n)
{

    int reverse = 0, remainder;
    int original=n;


    while (n!= 0)
    {

        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n /= 10;
    }
    if (original== reverse)
    {
        cout << "The number is palindrome :";
    }
    else
    {
        cout << "The number is not palindrome :";
    }
}

int main()
{
    int num;
    cout << "Enter the number :" << endl;
    cin >> num;
    pal(num);

    return 0;
}