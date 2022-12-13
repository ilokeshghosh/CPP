#include <iostream>
using namespace std;

class shop
{
    int id;
    float price;

public:
    void setdata(int a, float b)
    {
        id = a;
        price = b;
    }
    void getdata(void)
    {
        cout << "Code of this item is " << id << endl;
        cout << "Price of this item is " << price << endl;
    }
};
int main()
{
    int size;
    int x;
    float y;
    cout<<"Enter the number of item you want to buy :"<<endl;
    cin>>size;
    shop *s = new shop[size];
    shop *stemp=s;
    
    for(int i = 0;i<size;i++){

        cout<<"Enter Id and price of item :"<<i+1<<endl;
        cin>>x>>y;
        s->setdata(x,y);
        s++;
    }

    for(int i=0;i<size;i++){

        cout<<"Item number: "<<i+1<<endl;
        stemp->getdata();
        stemp++;


    }

    return 0;
}