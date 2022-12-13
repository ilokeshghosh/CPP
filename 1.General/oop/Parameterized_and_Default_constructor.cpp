#include <iostream>
using namespace std;

class employee
{
    int id, roll;

public:
    employee(int, int);
    void print(void)
    {

        cout << "The id number and roll number of the employee is " << id << " and " << roll << endl;
    }
};
employee ::employee(int a, int b) //This is parameterized constructor as it takes parameter
{
    id = a;
    roll = b;
}
int main()
{
    //This is implicit call
    employee e1(110,05),e2(120,06);
    e1.print();
    e2.print();

    //This is explicit call
    employee e3 = employee(125,10),e4=employee(130,12);
    e3.print();
    e4.print();
}