#include<iostream>
#include<fstream>
using namespace std;
int main(){
    
    // ofstream out;
    // out.open("test1.txt");
    // out<<"This is lokesh ghosh"<<endl;
    // out<<"THis is second line of the file"<<endl;
    // out<<"THis is third line of the file"<<endl;
    // out<<"THis is fourth line of the file"<<endl;
    // out<<"THis is fifth line of the file"<<endl;
    // out<<"THis is sixth line of the file"<<endl;
    // out<<"THis is seventh line of the file"<<endl;
    // out<<"THis is eighth line of the file"<<endl;
    // out.close();

    ifstream in;
    string s;
    in.open("test2.txt");

    while(in.eof()==false){ //here we can write false or 0
        getline(in,s);
        cout<<s<<endl;
    }
    // getline(in,s);
    // getline(in,st);
    // getline(in,st3);
    // cout<<s<<endl;
    // cout<<st<<endl;
    // cout<<st3<<endl;
    in.close();

 return 0;
}