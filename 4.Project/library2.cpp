#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <cstdlib>
#include <conio.h>
using namespace std;
class student
{

private:
    string bookid;
    string bookname, authorname, bookcategory, bookpubcom, bookpubmonth;
    int bookpubyear;

public:
    void menu();
    void insert();
    void display();
    void modify();
    void search();
    void deleted();
};
void student::menu()
{
menustart:
    int choice;
    char x;
    system("cls");
    cout << "\t\t\t-------------------------------" << endl;
    cout << "\t\t\t | Library MANAGEMENT SYSTEM | " << endl;
    cout << "\t\t\t-------------------------------" << endl;
    cout << "\t\t\t 1.Add new book " << endl;
    cout << "\t\t\t 2.Display all book " << endl;
    cout << "\t\t\t 3.Update book information " << endl;
    cout << "\t\t\t 4.Search all books " << endl;
    cout << "\t\t\t 5.Delete a book " << endl;
    cout << "\t\t\t 6.Exit " << endl;
    cout << "\t\t\t-------------------------------" << endl;
    cout << "\t\t\t  Choose Option:[1/2/3/4/5/6 " << endl;
    cout << "\t\t\t-------------------------------" << endl;
    cout << "Enter your choose: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        do
        {
            insert();
            cout << "\n\t\t\t Do you want to add more books? [y/n]: ";
            cin >> x;
        } while (x == 'y' || x == 'Y');

        break;
    case 2:
        display();
        break;
    case 3:
        modify();
        break;
    case 4:
        search();
        break;
    case 5:
        deleted();
        break;
    case 6:
        exit(0);
    default:
        cout << "\n\t\t\t Invalid choice...  Please Try Again..";
    }
    getch();
    goto menustart;
}
void student ::insert() // add student details
{

    system("cls");
    fstream file;
    cout << "\n------------------------------------------------------------------";
    cout << "\n----------------------------Add Book Details-------------------" << endl;
    cout << "\t\t\tEnter Book Name :: ";
    cin >> bookname;
    cout << "\t\t\tEnter Book ID :: ";
    cin >> bookid;
    cout << "\t\t\tEnter Author Name :: ";
    cin >> authorname;
    cout << "\t\t\tEnter Book Category :: ";
    cin >> bookcategory;
    cout << "\t\t\tEnter Publication Company Name :: ";
    cin >> bookpubcom;
    cout << "\t\t\tEnter Publication Month :: ";
    cin >> bookpubmonth;
    cout << "\t\t\tEnter Publication Year :: ";
    cin >> bookpubyear;

    file.open("studentrecord.txt", ios::app | ios::out);

    file << " " << bookname << " " << bookid << " " << authorname << " " << bookcategory << " " << bookpubcom << " " << bookpubmonth << " " << bookpubyear << " "
         << "\n";
    file.close();
}

void student ::display() //#2
{
    system("cls");
    int total = 0;
    fstream file;
    cout << "\n-----------------------------------------------------------------------" << endl;
    cout << "\n----------------------Student Record Table------------------------" << endl;
    file.open("studentRecord.txt", ios::in);
    if (!file)
    {
        cout << "\n\t\t\tNo Data Is Present....";
        file.close();
    }
    else
    {
        file >> bookname >> bookid >> authorname >> bookcategory >> bookpubcom >> bookpubmonth >> bookpubyear;
        while (!file.eof())
        {
            cout << "\t\t\t Book No." << total++ << endl;
            cout << "\t\t\t Book name:" << bookname << endl;
            cout << "\t\t\t Book id." << bookid << endl;
            cout << "\t\t\t Author name:" << authorname << endl;
            cout << "\t\t\t Book category:" << bookcategory << endl;
            cout << "\t\t\t Book publicationcompany:" << bookpubcom << endl;
            cout << "\t\t\t publication month" << bookpubmonth << endl;
            cout << "\t\t\t Book pub year:" << bookpubyear << endl
                 << endl;
            file >> bookname >> bookid >> authorname >> bookcategory >> bookpubcom >> bookpubmonth >> bookpubyear;
        }
        if (total == 0)
        {
            cout << "\n\t\t\tNo Data Is Present....";
        }
    }
    file.close();
}

void student::modify() //#3
{
    system("cls");
    string book_id;
    int found = 0;
    fstream file, file1;
    cout << "\n-----------------------------------------------------------------------" << endl;
    cout << "\n----------------------Modify student Table------------------------" << endl;
    file.open("studentRecord.txt", ios::in);
    if (!file)
    {
        cout << "\n\t\t\tNo Data Is Present....";
        file.close();
    }
    else
    {
        cout << "\nEnter Book Id which book details you want to modify :";
        cin >> book_id;
        file1.open("Record.txt", ios::app | ios::out);
        file >> bookname >> bookid >> authorname >> bookcategory >> bookpubcom >> bookpubmonth >> bookpubyear;
        while (!file.eof())
        {
            if (book_id != bookid)
            {
                file1 << " " << bookname << " " << bookid << " " << authorname << " " << bookcategory << " " << bookpubcom << " " << bookpubmonth << " " << bookpubyear << " "
                      << "\n";
            }
            else
            {
                cout << "\t\t\tEnter Book Name :: ";
                cin >> bookname;
                cout << "\t\t\tEnter Book ID :: ";
                cin >> bookid;
                cout << "\t\t\tEnter Author Name :: ";
                cin >> authorname;
                cout << "\t\t\tEnter Book Category :: ";
                cin >> bookcategory;
                cout << "\t\t\tEnter Publication Company Name :: ";
                cin >> bookpubcom;
                cout << "\t\t\tEnter Publication Month :: ";
                cin >> bookpubmonth;
                cout << "\t\t\tEnter Publication Year :: ";
                cin >> bookpubyear;

                file1 << " " << bookname << " " << bookid << " " << authorname << " " << bookcategory << " " << bookpubcom << " " << bookpubmonth << " " << bookpubyear << " "
                      << "\n";

                found++;
            }
            file >> bookname >> bookid >> authorname >> bookcategory >> bookpubcom >> bookpubmonth >> bookpubyear;
        }
        if (found == 0)
        {
            cout << "\n\t\t\tBook id not found....";
        }
        file1.close();
        file.close();
        remove("studentRecord.txt");
        rename("Record.txt", "studentRecord.txt");
    }
}
void student ::search() //#4
{
    system("cls");
    fstream file;
    int found = 0;
    file.open("studentRecord.txt", ios::in);
    if (!file)
    {
        cout << "\n-----------------------------------------------------------------------" << endl;
        cout << "\n----------------------search student Table------------------------" << endl;

        cout << "\n\t\t\t No data is present...";
    }
    else
    {
        string book_id;
        cout << "\n-----------------------------------------------------------------------" << endl;
        cout << "\n----------------------search student Table------------------------" << endl;

        cout << "\nEnter Book Id which you want search :";
        cin >> book_id;

        file >> bookname >> bookid >> authorname >> bookcategory >> bookpubcom >> bookpubmonth >> bookpubyear;

        while (!file.eof())
        {
            if (book_id == bookid)
            {
                cout << "\t\t\t Book name:" << bookname << endl;
                cout << "\t\t\t Book id." << bookid << endl;
                cout << "\t\t\t Author name:" << authorname << endl;
                cout << "\t\t\t Book category:" << bookcategory << endl;
                cout << "\t\t\t Book publicationcompany:" << bookpubcom << endl;
                cout << "\t\t\t publication month" << bookpubmonth << endl;
                cout << "\t\t\t Book pub year:" << bookpubyear << endl;
                found++;
            }

            file >> bookname >> bookid >> authorname >> bookcategory >> bookpubcom >> bookpubmonth >> bookpubyear;
        }
        if (found == 0)
        {
            cout << "\n\t\t\tBook id not found...";
        }
        file.close();
    }
}

void student::deleted()
{
    system("cls");
    fstream file, file1;
    int found = 0;
    string book_id;
    cout << "\n-----------------------------------------------------------------------" << endl;
    cout << "\n----------------------deleted student Table------------------------" << endl;
    file.open("studentRecord.txt", ios::in);
    if (!file)
    {
        cout << "\n\t\t\tNo Data Is Present....";
        file.close();
    }
    else
    {
        cout << "\n Enter the Book id which you want to delete :";
        cin >> book_id;
        file1.open("Record.txt", ios::app | ios::out);
        file >> bookname >> bookid >> authorname >> bookcategory >> bookpubcom >> bookpubmonth >> bookpubyear;
        while (!file.eof())
        {
            if (book_id != bookid)
            {
                file1 << " " << bookname << " " << bookid << " " << authorname << " " << bookcategory << " " << bookpubcom << " " << bookpubmonth << " " << bookpubyear << " "
                      << "\n";
            }
            else
            {
                found++;
                cout << "\n\t\t\tSuccessfully Delele Data ";
            }
            file >> bookname >> bookid >> authorname >> bookcategory >> bookpubcom >> bookpubmonth >> bookpubyear;
        }
        if (found == 0)
        {
            cout << "\n\t\t\tStudent roll.no found...";
        }
        file1.close();
        file.close();
        remove("studentRecord.txt");
        rename("Record.txt", "studentRecord.txt");
    }
}
int main()
{
    student m;
    m.menu();
}