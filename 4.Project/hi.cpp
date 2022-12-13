#include<iostream>
#include<string>
using namespace std;
int main(){
    int a=7;
    string bookname,bookid;
     cout << "\t\t\tEnter Book Name :: ";
    getline(cin, bookname);

    cout << "\t\t\tEnter Book ID :: ";
    getline(cin, bookid);

    cout<<bookname<<endl<<bookid<<endl;
    cout<<a<<endl;
 return 0;
}