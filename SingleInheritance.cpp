//Single Inheritance 
#include<iostream>
#include<string>
using namespace std;
class Book {
    public:
    string title = "The Alchemist ";
    void author() {
        cout << "Author: Paulo Coelho" << endl;
    }
};
class Novel : public Book {
    public:
    string genre = "Fiction";
};
int main() {
    Novel n1;
    n1.author();
    cout << "Title: " << n1.title << endl;
    cout << "Genre: " << n1.genre << endl;
    return 0;
}
/*
Output :
Author: Paulo Coelho
Title: The Alchemist 
Genre: Fiction
*/
