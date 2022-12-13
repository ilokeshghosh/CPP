#include <iostream>
#include <cmath>
using namespace std;

class point
{
    int x1, y1, x2, y2;

public:
    point(int a, int b, int c, int d)
    {
        x1 = a;
        y1 = b;
        x2 = c;
        y2 = d;
    }
    void distance(void)
    {
        int e;
        e = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
        cout << "The distance between two point is : " << e;
    }
};

int main()
{
    int m, n, o, k;
    cout << "Enter the value of x1 :" << endl;
    cin >> m;

    cout << "Enter the value of y1 :" << endl;
    cin >> n;

    cout << "Enter the value of x2 :" << endl;
    cin >> o;

    cout << "Enter the value of y2 :" << endl;
    cin >> k;

    point p(m, n, o, k);
    p.distance();
    return 0;
}