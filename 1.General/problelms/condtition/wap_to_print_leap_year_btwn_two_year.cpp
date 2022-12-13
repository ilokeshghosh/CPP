#include <iostream>
using namespace std;
int main()
{
    int a, b;
    int temp;
    int count=1;
   

        cout << "Enter the inital year " << endl;
        cin >> a;
        cout << "Enter the final year " << endl;
        cin >> b;
        temp=a;
        while (a <= b)
        {
            if (a % 4 == 0)
            {
                if (a % 100 == 0)
                {
                    if (a % 400 == 0)
                    {

                        cout << a << " Is a leaf year between " << temp << " and " << b <<" and count is :"<<count++<<endl;
                        a += 4;
                    }
                    else
                    {
                        a++;
                    }
                }
                else
                {
                    cout << a << " Is a leaf year between " << temp << " and " << b <<" and count is :"<<count++<< endl;
                    a += 4;
                }
            }
            else
            {
                a++;
            }
        }
    

    return 0;
}