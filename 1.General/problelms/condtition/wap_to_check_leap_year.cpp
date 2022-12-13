#include <iostream>
using namespace std;
int main()
{
    int y;

    while (int i = 1)
    {

        cout << "Enter the year :" << endl;
        cin >> y;

        if (y % 4 == 0)
        {

            if (y % 100 == 0)
            {

                if (y % 400 == 0)
                {
                    cout << "The given year is  a leaf year :" << endl;
                    
                }
                else
                {
                    cout << y << " is not a leaf year " << endl;
                    
                }
            }
            else
            {

                cout << y << "is a leaf year" << endl;
            
            }
        }
        else
        {
            cout << "The given year is not a leaf year :" << endl;
        }
    }
    return 0;
}