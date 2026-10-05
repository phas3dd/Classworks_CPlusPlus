#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;

struct Book {
    double id;
    char title[50];
    char author[50];
    char publisher[50];
    char genre[30];
    int year;
    double price;
};

void ShowBook(Book& book)
{
    cout << "ID: " << book.id << endl;
    cout << "Title: " << book.title << endl;
    cout << "Author: " << book.author << endl;
    cout << "Publisher: " << book.publisher << endl;
    cout << "Genre: " << book.genre << endl;
    cout << "Year: " << book.year << endl;
    cout << "Price: " << book.price << endl;
}

void EditBook(Book* book, int size, int id)
{
    for (int i = 0; i < size; i++)
    {
        if (book[i].id == id) {
            ShowBook(book[i]);
            cout << "Enter new price: ";
            cin >> book[i].price;
        }
    }
}

void SearchByAuthor(char author[], Book* book, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (strcmp(book[i].author, author) == 0)
        {
            ShowBook(book[i]);
        }
    }
}

void SearchByTitle(char Title[], Book* book, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (strcmp(book[i].title, Title) == 0)
        {
            ShowBook(book[i]);
        }
    }
}

void SearchByPublisher(char Publisher[], Book* book, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (strcmp(book[i].publisher, Publisher) == 0)
        {
            ShowBook(book[i]);
        }
    }
}

void SearchByGenre(char Genre[], Book* book, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (strcmp(book[i].genre, Genre) == 0)
        {
            ShowBook(book[i]);
        }
    }
}



int main() {
    char name[50];
    int choice;
    const int size = 10;
    Book* pbooks = new Book[size];

    pbooks[0] = { 0, "The Hobbit", "J.R.R. Tolkien", "George Allen & Unwin", "Fantasy", 1937, 14.99 };
    pbooks[1] = { 1, "1984", "George Orwell", "Secker & Warburg", "Dystopian", 1949, 9.99 };
    pbooks[2] = { 2, "The Great Gatsby", "F. Scott Fitzgerald", "Charles Scribner's", "Classic", 1925, 12.50 };
    pbooks[3] = { 3, "To Kill a Mockingbird", "Harper Lee", "J. B. Lippincott Co.", "Fiction", 1960, 8.99 };
    pbooks[4] = { 4, "Dune", "Frank Herbert", "Chilton Books", "Sci-Fi", 1965, 18.00 };
    pbooks[5] = { 5, "Foundation", "Isaac Asimov", "Gnome Press", "Sci-Fi", 1951, 11.25 };
    pbooks[6] = { 6, "The Catcher in the Rye", "J.D. Salinger", "Little, Brown", "Classic", 1951, 10.00 };
    pbooks[7] = { 7, "Brave New World", "Aldous Huxley", "Chatto & Windus", "Dystopian", 1932, 13.45 };
    pbooks[8] = { 8, "Fahrenheit 451", "Ray Bradbury", "Ballantine Books", "Sci-Fi", 1953, 7.99 };
    pbooks[9] = { 9, "The Shining", "Stephen King", "Doubleday", "Horror", 1977, 15.99 };
    do
    {
        system("cls");
        cout << "-------------- Menu -----------------" << endl;
        cout << "Show all books           [1]" << endl;
        cout << "Edit book                [2]" << endl;
        cout << "Search by author         [3]" << endl;
        cout << "Search by title          [4]" << endl;
        cout << "Search by publisher      [5]" << endl;
        cout << "Search by genre          [6]" << endl;
        cout << "Exit                     [0]" << endl;
        cin >> choice;
        cin.ignore();
        switch (choice)
        {
        case 0:
            cout << "Have a nice day!" << endl;
            break;
        case 1:
            for (int i = 0; i < size; ++i) {
                ShowBook(pbooks[i]);
                cout << endl;
            }
        case 2:
            int id;
            cout << "Enter book's id: ";
            cin >> id;
            EditBook(pbooks, size, id);
            break;
        case 3:
            cout << "Enter book's author: ";
            cin.getline(name, 50);
            SearchByAuthor(name, pbooks, size);
            break;
        case 4:
            cout << "Enter book's title: ";
            cin.getline(name, 50);
            SearchByTitle(name, pbooks, size);
            break;
        case 5:
            cout << "Enter book's publisher: ";
            cin.getline(name, 50);
            SearchByPublisher(name, pbooks, size);
        case 6:
            cout << "Enter book's genre: ";
            cin.getline(name, 50);
            SearchByGenre(name, pbooks, size);
        default:
            cout << "Error choice " << endl;
            break;
        }
        _getch();


    } while (choice != 0);


    delete[] pbooks;

}