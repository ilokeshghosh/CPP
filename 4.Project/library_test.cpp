#include <iostream>
#include <string.h>
#include <iomanip>
#include <fstream>
#include <stdlib.h>
#include <cstdlib>
#include <conio.h>
#include <windows.h>
#include <stdio.h>
using namespace std;
class book
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
    void gotoxy(short x, short y)
    {
        COORD pos = {x, y};
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
    }
};
void book::menu()
{
menustart:
    while (1)
    {
        char choice;
        char x;

        system("cls");
        cout << setw(25) << "-------------" << endl

             << setw(25) << "| MAIN MENU |" << endl

             << setw(25) << "-------------" << endl
             << endl

             << setw(52)

             << "Please choose one of the options below: "

             << endl
             << setw(71)

             << "--------------------------------------------------------------"

             << endl
             << endl

             << setw(25) << "( A ) Add Book" << endl
             << endl

             << setw(31) << "( O ) Sort all Books" << endl
             << endl

             << setw(33) << "( S ) Search all Books" << endl
             << endl

             << setw(33) << "( D ) Diplay all Books" << endl
             << endl

             << setw(30) << "( T ) Delete a Book" << endl
             << endl

             << setw(40) << "( M ) Update Book Information" << endl
             << endl

             << setw(21) << "( Q ) Quit" << endl
             << endl
             << setw(32) << "Enter Option      [ ]" << endl
             << endl;
        // cin >> choice;
        gotoxy(30, 21);

        switch (getche())
        {
        case 'a':
        case 'A':
            do
            {
                insert();
                cout << "\n\t\t\t Do you want to add more books? [y/n]: ";
                cin >> x;
            } while (x == 'y' || x == 'Y');

            break;

        case 'd':
        case 'D':
            display();
            break;
        case 'm':
        case 'M':
            modify();
            break;

        case 'S':
        case 's':
            search();
            break;
        case 't':
        case 'T':
            deleted();
            break;
        case 'q':
        case 'Q':
            exit(0);
        default:
            cout << ("\n\n \t\tSelect only from the given menu.....\n \t\tpress enter to to go to main menu......");
            getch();
        }
    }
    getch();
    // goto menustart;
}
void book ::insert() // add student details
{

    system("cls");
    char ch;
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

    file.open("bookRecord.txt", ios::app | ios::out);

    file << " " << bookname << " " << bookid << " " << authorname << " " << bookcategory << " " << bookpubcom << " " << bookpubmonth << " " << bookpubyear << " "
         << "\n";
    file.close();
    ch = getch();
}

void book ::display() //#2
{
    system("cls");
    int total = 0;
    fstream file;
    // cout << "\n-----------------------------------------------------------------------" << endl;
    // cout << "\n----------------------Book Information Table------------------------" << endl;
    file.open("bookRecord.txt", ios::in);
    if (!file)
    {
        cout << "\n\t\t\tNo Data Is Present....";
        getch();
        file.close();
    }
    else
    {

        cout << "In display function\n";
        cout << "__________"
             << "__________________________________________________"
             << "______________________________"
             << "______________________________"
             << "______________________________"
             << "______________________________"
             << "______________________________" << endl;
        cout << setw(10) << "\"Book ID\"" << setw(50) << "\"Book Name\"" << setw(30) << "\"Author Name\"" << setw(30) << "\"Category\"" << setw(30) << "\"Publication\"" << setw(30) << "\"Month of Publication\"" << setw(30) << "\"Year of Publication\"" << endl;
        cout << "__________"
             << "__________________________________________________"
             << "______________________________"
             << "______________________________"
             << "______________________________"
             << "______________________________"
             << "______________________________" << endl;

        file >> bookname >> bookid >> authorname >> bookcategory >> bookpubcom >> bookpubmonth >> bookpubyear;
        while (!file.eof())
        {
            cout << setw(10) << bookid << setw(50) << bookname << setw(30) << authorname << setw(30) << bookcategory << setw(30) << bookpubcom << setw(30) << bookpubmonth << setw(30) << bookpubyear << endl;
            cout << "__________"
                 << "__________________________________________________"
                 << "______________________________"
                 << "______________________________"
                 << "______________________________"
                 << "______________________________"
                 << "______________________________" << endl;

            file >> bookname >> bookid >> authorname >> bookcategory >> bookpubcom >> bookpubmonth >> bookpubyear;
        }
        cout << "Press enter to goto main manu.....";
       
        if (total == 0)
        {
            
             file.close();
            cout << "\n\t\t\tNo Data Is Present....";
           
            getch();
        }
    }
   
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
        getch();
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
            getch();
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
        getch();
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
            getch();
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
        getch();
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
                getch();
            }
            file >> bookname >> bookid >> authorname >> bookcategory >> bookpubcom >> bookpubmonth >> bookpubyear;
        }
        if (found == 0)
        {
            cout << "\n\t\t\tBook Id not found...";
            getch();
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