#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <fstream>
#include <stdlib.h>
#include <cstdlib>
#include <string>
#include <string_view>
#include <regex>
#include <windows.h>
#include <iomanip>
using namespace std;
// void gotoxy(short , short );
// void gotoxy(short x, short y)
// {
// COORD pos = {x, y};
// SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
// }
class library
{
private:
public:
    void gotoxy(short, short);
    void display();        // display function
    void add();            // add function
    void search();         // search function
    void sort();           // sort function
    void del();            // delete function
    void modify();         // modify function
    void sbyname();        // search by name
    void sbyid();          // search by id
    void sbycategory();    // search by category
    void sbypubcom();      // search by publcation company
    void sbypubyear();     // search by publishing year
    void sbyauthor();      // search by author
    void sortas();         // sort in ascending order
    void sortds();         // sort in descending order
    void sortasname();     // sort in ascending order by name
    void sortasid();       // sort in ascending order by id
    void sortascategory(); // sort in ascending order by category
    void sortaspubcom();   // sort in ascending order by publication company
    void sortaspubyear();  // sort in ascending order by publication year
    void sortasauthor();   // sort in ascending order by author
    void sortdsname();     // sort in descending order by name
    void sortdsid();       // sort in descending order by id
    void sortdscategory(); // sort in descending order by category
    void sortdspubcom();   // sort in descending order by publication company
    void sortdspubyear();  // sort in descending order by publication year
    void sortdsauthor();   // sort in descending order by author
    void dbyname();        // delete by name
    void dbyid();          // delete by id
    void dbycategory();    // delete by category
    void dbypubcom();      // delete by publication company
    void dbypubyear();     // delete by publication year
    void dbyauthor();      // delete by author
    void mbyname();        // modify by name
    void mbyid();          // modify by id
    void mbycategory();    // modify by cateory
    void mbypubcom();      // modify by publication company
    void mbypubyear();     // modify by publication year
    void mbyauthor();      // modify by author

    // void menu();
};

// void library::menu(){

// }

int main()
{

    library l;
    int choice;
    char x;
    system("cls");

    while (1)
    {
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
        // gotoxy(30,21);

        switch (getche())
        {
        case 'a':
        case 'A':
            l.add();
            break;

        case 'd':
        case 'D':
            l.display();
            break;

        case 'S':
        case 's':
            l.search();
            break;

        case 't':
        case 'T':
            l.del();
            break;

        case 'O':
        case 'o':
            l.sort();
            break;

        case 'm':
        case 'M':
            l.modify();
            break;

        case 'q':
        case 'Q':
            exit(0);
            break;

        default:
            puts("\n\n \t\tSelect only from the given menu.....\n \t\tpress enter to to go to main menu......");
            getch();
        } // end switch
    }     // end while

    getch();

    return 0;
}