#include <iostream>
using namespace std;

int fib(int n)
{
   long s = 0;

    if (n < 2)
    {
        if(n==0){
            return s;
        }
        s += 1;
        return s;
    }
    

    s = fib(n - 1) + fib(n - 2);
    return s;
}
int main()
{
    int n;
    cout << "Enter the number you want fibonacci number of:" << endl;
    cin >> n;
    for(int i=0;i<=n;i++){
    cout << "The fibonacci number of "<<i<<"th postion is : "<< fib(i) << endl;
    }
    return 0;
}