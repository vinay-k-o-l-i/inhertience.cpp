//Multilevel Inheritance 
#include<iostream>
#include<string>
using namespace std;
class Animal {
    public:
    string type = "Mammal";
    void breathe() {
        cout << "Breathes Oxygen" << endl;
    }
};
class Dog : public Animal {
    public:
    string breed = "Labrador";
};
class Pet : public Dog {
    public:
    string name = "Tommy";
};
int main() {
    Pet p1;
    p1.breathe();
    cout << "Type: " << p1.type << endl;
    cout << "Breed: " << p1.breed << endl;
    cout << "Pet Name: " << p1.name << endl;
    return 0;
}
/*
Output :
Breathes Oxygen
Type: Mammal
Breed: Labrador
Pet Name: Tommy
*/
