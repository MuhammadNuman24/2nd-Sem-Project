#include <iostream>
#include <fstream>
using namespace std;

string bookName[100], bookar[100], publication[100];
int totalbooks= 0;
void addBook()
{
    cout << "Enter the title of the book: ";
    cin>>bookName[totalbooks];
    cout << "Enter the author of the book: ";
    cin>>bookar[totalbooks];
    cout << "Enter the year of publication: ";
    cin >> publication[totalbooks];
    cout<<bookName[totalbooks]<<" book added successfully! to the stock" << endl;
    totalbooks=totalbooks+1;
}

void displayBooks() {
    if(bookName[totalbooks] !=" "){
    for(int i=0 ; i<=totalbooks-1; i++){
        cout<<i+1<<" Book details . \n"<<"-----------------------------------"<<endl;
        cout << "Title: " << bookName[i] << endl;
        cout << "Author: " << bookar[i] << endl;
        cout << "Year: " << publication[i]<<"\n"<< endl;
        }
    }
    else {
        cout << "No books in the Stock." << endl;
    }
}

void searchBook()
{
    string title;
    cout << "Enter the title of the Book: ";
    cin>>title;
   
    for (int i=0 ; i<=totalbooks-1; i++)
    {
        if (title==bookName[i])
        {
           cout<<"----- Search Results -----"<<endl;
           cout << "Title: " << bookName[i] << endl;
            cout << "Author: " << bookar[i] << endl;
            cout << "Year: " << publication[i] << endl;
        }
    }
}
int main()
{
    int value;
 cout << "------ Bookshop Management System ------" << endl;
    while (true)
    {
        cout << "1. Add Book" << endl;
        cout << "2. Display Books" << endl;
         cout << "3. Search Books" << endl;
        cout << "4. Exit" << endl;
        cin >> value;
        switch (value)
        {
        case 1:
            addBook();
            break;
        case 2:
            displayBooks();
            break;
         case 3:
           searchBook();
           break;
        case 4:
            exit(0);
         cout << "Exiting the program." << endl;
          break;
        default:
            cout << "Invalid choice. Please try again." << endl;
             break;
        }
    }
    return 0;
    
}s