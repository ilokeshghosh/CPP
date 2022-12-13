/*
Git link: https://github.com/kunal-kushwaha/DSA-Bootcamp-Java/blob/main/assignments/04-functions.md

*/

#include <iostream>
using namespace std;
string grade(int m)
{   int i=0;
   
  
        if (m <= 100 && m >= 91)
        {
            return ("AA");
        }
        if (m <= 90 && m >= 81)
        {
            return ("AB");
        }
        if (m <= 80 && m >= 71)
        {
            return ("BB");
        }
        if (m <= 70 && m >= 61)
        {
            return ("BC");
        }
        if (m <= 60 && m > 51)
        {
            return ("CD");
        }
        if (m <= 50 && m >= 41)
        {
            return ("DD");
        }
        if (m <= 40)
        {
            return ("Fail");
        }
        i++;
    
    return ("Error !!");
}
int main()
{
    int marks;
    cout << "Enter your marks :" << endl;
    cin >> marks;
    cout << "The grades of the student is : " << grade(marks) << endl;
}