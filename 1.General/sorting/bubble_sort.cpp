#include <iostream>
using namespace std;
int n;
int ar[20];

void ins_array()
{

    cout << "Enter the size of the array [max size 20]" << endl;
    cin >> n;

    cout << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the value of " << i << "position of the array" << endl;
        cin >> ar[i];
    }
    cout << endl;
}

void sort()
{
    for(int j=0;j<n;j++){


    for (int i = 0; i <n-1; i++)
    {
        if (ar[i] > ar[i + 1])
        {
            swap(ar[i], ar[i + 1]);
        }
    }
    }
}
void prnt_array()
{

    cout << "The inserted array is " << endl;
    for (int i = 0; i <n; i++)

    {
        cout << ar[i] << endl;
    }
}
int main()
{

    ins_array();
    prnt_array();
    sort();
    prnt_array();
}