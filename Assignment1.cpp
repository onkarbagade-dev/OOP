#include <iostream>
using namespace std;

int BookID;
string BookName;
string AuthorName;

void input()
{
    cout << "Enter Book ID: ";
    cin >> BookID;

    cout << "Enter Book Name: ";
    cin >> BookName;

    cout << "Enter Author Name: ";
    cin >> AuthorName;
}

void display()
{
    cout << "\n--- Book Details ---" << endl;
    cout << "Book ID: " << BookID << endl;
    cout << "Book Name: " << BookName << endl;
    cout << "Author Name: " << AuthorName << endl;
}

int main()
{
    input();
    display();

    return 0;
}
