//Multiple Inheritance 
#include <iostream>
#include <string>
using namespace std;
class Book {
protected:
    string title;
public:
    Book() {
        cout << "Enter Book Title: ";
        getline(cin, title);
    }
    string getTitle() {
        return title;
    }
};
class Author {
protected:
    string name;
public:
    Author() {
        cout << "Enter Author Name: ";
        getline(cin, name);
    }
    string getAuthor() {
        return name;
    }
};
class Novel : public Book, public Author {
    string genre;
public:
    Novel() {
        cout << "Enter Genre: ";
        getline(cin, genre);
    }
    void display() {
        cout << "\nBook Details:" << endl;
        cout << "Title: " << getTitle() << endl;
        cout << "Author: " << getAuthor() << endl;
        cout << "Genre: " << genre << endl;
    }
};
int main() {
    Novel n;
    n.display();
    return 0;
}
/*
Output :
Enter Book Title: Merchant Of Venice
Enter Author Name: William Shakesphere
Enter Genre: Comedy

Book Details:
Title: Merchant Of Venice
Author: William Shakesphere
Genre: Comedy
*/
