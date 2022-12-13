#include <iostream>
using namespace std;

int main()
{

    /*
        int *ptr=5;
        means
        int *ptr;
        ptr=5;

    */

    // Basic Example
    int a = 4;
    int *ptr = &a;
    cout << "The value of a is " << *(ptr) << endl;

    // new keyword
    // int *p=new int(40);
    float *p = new float(40.52);
    cout << "The value at address p is " << *(p) << endl;

    // Initialization of array dynamically(allocate memory during run-time) by using new operator
    int *arr = new int[3];
    arr[0] = 10;
    *(arr + 1) = 20;
    arr[2] = 30;
    // delete[] arr;
    cout << "The value of arr[0] = " << arr[0] << endl;
    cout << "The value of arr[1] = " << arr[1] << endl;
    cout << "The value of arr[2] = " << arr[2] << endl;

    // delete operator
    return 0;
}