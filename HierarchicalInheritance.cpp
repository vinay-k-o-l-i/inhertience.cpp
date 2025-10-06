//Hierarchical Inheritance 
#include <iostream>
#include <string>
using namespace std;
class Book {
protected:
    string title;
public:
    Book() {
        title = "The Alchemist";
    }
    void showTitle() {
        cout << "Title: " << title << endl;
    }
};
class Novel : public Book {
    string genre;
public:
    Novel() {
        cout << "Enter Genre: ";
        cin >> genre;
    }
    void display() {
        showTitle();
        cout << "Genre: " << genre << endl;
    }
};
class Author : public Book {
    string name;
public:
    Author() {
        cout << "Enter Author Name: ";
        cin >> name;
    }
    void showAuthor() {
        showTitle();
        cout << "Author: " << name << endl;
    }
};
int main() {
    Novel n;
    n.display();
    Author a;
    a.showAuthor();
    return 0;
}
/*
Output :
Enter Genre: Fiction
Title: The Alchemist
Genre: Fiction
Enter Author Name: Paulo Coelho
Title: The Alchemist
Author: Paulo
*/
