#include <iostream>
#include <string>
using namespace std;
class binary
{
private:
  string s;
  void chk_bin(void);

      public : void read(void);
  // void chk_bin(void);
  void dispay(void);
  void ones_compliment(void);
};
void binary ::read(void)
{
  cout << "Enter a binary number" << endl;
  cin >> s;
}
void binary ::chk_bin(void)
{
  for (int i = 0; i < s.length(); i++)
  {
    if (s.at(i) != '0' && s.at(i) != '1')
    {
      cout << "Incorrect binary format" << endl;
      exit(0);
    }
    else
    {
      cout << "The entered number is a binary " << endl;
      break;
    }
  }
}

void binary::ones_compliment(void)
{
  chk_bin();
  for (int i = 0; i < s.length(); i++)
  {
    if (s.at(i) == '0')
    {
      s.at(i) = '1';
    }
    else
    {
      s.at(i) = '0';
    }
  }
}

void binary::dispay(void)
{ 
  cout<<"The binary number is "<<endl;
  for (int i = 0; i < s.length(); i++)
  {
    cout << s.at(i);
  }
  cout<<endl;
}
int main()
{

  binary b;
  b.read();
  // b.chk_bin();
  b.dispay();
  b.ones_compliment();
  b.dispay();
}
   