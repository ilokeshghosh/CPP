
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string>
// #include<string.h>
#include <limits>
#include <cstdlib>
#include <conio.h>
using namespace std;
class book
{

private:
    string bookid;
    string bookname;
    // char bookname[60];
    string authorname, bookcategory;
    string bookpubcom, bookpubmonth;
    int bookpubyear;

public:

    void menu();
    void insert();
    void display();
    void modify();
    void search();
    void deleted();
};
void book::menu()
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
        insert();
        // do
        // {
        //     insert();
        //     cout << "\n\t\t\t Do you want to add more books? [y/n]: ";
        //     cin >> x;
        // } while (x == 'y' || x == 'Y');

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
void book ::insert() // add student details
{

    system("cls");
    fstream file;
    file.open("bookRecord.txt", ios::app | ios::out);
    cout << "\n------------------------------------------------------------------";
    cout << "\n----------------------------Add Book Details-------------------\n";
    cout << "\t\t\tEnter Book Name :: ";
    getline(cin,bookname);
    getline(cin,bookname);
    // std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "\t\t\tEnter Book ID :: ";
    getline(cin, bookid);
    cout << "\t\t\tEnter Author Name :: ";
    getline(cin, authorname);
    cout << "\t\t\tEnter Book Category :: ";
    getline(cin, bookcategory);
    cout << "\t\t\tEnter Publication Company Name :: ";
    getline(cin, bookpubcom);
    cout << "\t\t\tEnter Publication Month :: ";
    getline(cin, bookpubmonth);
    cout << "\t\t\tEnter Publication Year :: ";
    cin >> bookpubyear;

    file.open("bookRecord.txt", ios::app | ios::out);

    file << " " << bookname << " " << bookid << " " << authorname << " " << bookcategory << " " << bookpubcom << " " << bookpubmonth << " " << bookpubyear << " "
         << "\n";
    file.close();
}

void book ::display() //#2
{
    system("cls");
    int total = 0;
    fstream file;
    cout << "\n-----------------------------------------------------------------------" << endl;
    cout << "\n----------------------Book Information Table------------------------" << endl;
    file.open("bookRecord.txt", ios::in);
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

void book::modify() //#3
{
    system("cls");
    string book_id;
    int found = 0;
    fstream file, file1;
    cout << "\n-----------------------------------------------------------------------" << endl;
    cout << "\n----------------------Modify Book Information------------------------" << endl;
    file.open("bookRecord.txt", ios::in);
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
        remove("bookRecord.txt");
        rename("Record.txt", "bookRecord.txt");
    }
}
void book ::search() //#4
{
    system("cls");
    fstream file;
    int found = 0;
    file.open("bookRecord.txt", ios::in);
    if (!file)
    {
        cout << "\n-----------------------------------------------------------------------" << endl;
        cout << "\n----------------------Search Book------------------------" << endl;

        cout << "\n\t\t\t No data is present...";
    }
    else
    {
        string book_id;
        cout << "\n-----------------------------------------------------------------------" << endl;
        cout << "\n----------------------Search Book------------------------" << endl;

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

void book::deleted()
{
    system("cls");
    fstream file, file1;
    int found = 0;
    string book_id;
    cout << "\n-----------------------------------------------------------------------" << endl;
    cout << "\n----------------------Delete Book Information------------------------" << endl;
    file.open("bookRecord.txt", ios::in);
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
            cout << "\n\t\t\tBook Id not found...";
        }
        file1.close();
        file.close();
        remove("bookRecord.txt");
        rename("Record.txt", "bookRecord.txt");
    }
}
int main()
{
    book m;
    m.menu();
}