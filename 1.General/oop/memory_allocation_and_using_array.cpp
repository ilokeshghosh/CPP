#include <iostream>
using namespace std;
class shop
{
    int itemId[100];
    int itemprice[100];
    int counter;

public:
    void initcounter(void)
    {
        counter = 0;
    }
    void displayprice(void);
    void setprice(void);
};

void shop ::setprice(void)
{
    cout << "Enter Id of your " << counter + 1 << "no item :" << endl;
    cin >> itemId[counter];
    cout << "Enter Price of your item :" << endl;
    cin >> itemprice[counter];
    counter++;
}

void shop ::displayprice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of " << itemId[i] << "no item is " << itemprice[i] << endl;
    }
}
int main()
{
    shop dukan;
    dukan.initcounter();
    dukan.setprice();
    dukan.setprice();
    dukan.setprice();
    dukan.setprice();
    dukan.displayprice();
    return 0;
}