#include <iostream>
#include <map>
#include <string>
using namespace std;
// taking data for enrollment

class apply
{
protected:
    string n;
    string f_n;
    string l_n;
    // string c;
    int i;
    int nid;

public:
    void namec(string f_n,string l_n){
        cout<<"Enter the first name of the student:"<<endl;
        cin>>f_n;
        cout<<"Enter the last name of the student"<<endl;
        cin>>l_n;
        // cout<<"Enter the course name "<<endl;
        // cin>>c;
    }
    apply()
    {
        
        //  map<string,string,string,int>::iterator iter;
        for (int i = 0; i < 2; i++)
        {
            // cout << "Enter the student full  name with giving a under score :" << endl;
            // cin >>n;
            
            // cout << "Enter the last name of the student" << endl;
            // cin >> l_n;
            // cout << "Enter the course name :" << endl;
            // cin >> c;

            cout << "Enter the nid as per your entrance exam admit card " << endl;
            cin >> nid;
            map<int,namec> student= ({nid,namec(f_n,l_n)});
           
        }
    }
};
class dashboard : protected apply {
     
    public:
    void display(){
     cout<<"The name is :"<<n<<endl;
     cout<<"the nid is "<<nid<<endl;
    }
};
/*
void app()
{

    string f_n;
    string l_n;
    string c;
    int i;
    int nid;
    // void apply(void){
    map<string, int> student;
    //  map<string,string,string,int>::iterator iter;
    for (int i = 0; i < 1; i++)
    {
        cout << "Enter the student first name :" << endl;
        cin >> f_n;
        cout << "Enter the last name of the student" << endl;
        cin >> l_n;
        cout << "Enter the course name :" << endl;
        cin >> c;
        cout << "Enter the nid as per your entrance exam admit card " << endl;
        cin >> nid;
        student.insert({f_n, nid});
    }
}
*/

int main()
{
    dashboard s1;
    s1.display();
    
    return 0;
}