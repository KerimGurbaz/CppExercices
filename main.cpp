#include <iostream>
#include <string>
using namespace std;

#include "date.h"

void afficher_date(const Date &d) {
    cout<<d.day<<"."<<d.mounth<<"."<<d.year;
}

struct Person {
    string firstName;
    string lastName;
    int age;
};

struct Rectangle {
    int width;
    int height;
};

struct Point {
    int x;
    int y;
};

struct Color {
    int red;
    int green;
    int blue;
};

struct MyStruct {
    int data; //public by default
};

class MyClass {
    int data ; // Private by default;

public:
    void setData(int d){data = d;}
    int getData(){return data;}
};

int main() {

    Date uneDate = {29, 10, 1987};
    cout<<"Une date     :" ;
    afficher_date(uneDate);

    MyStruct s;
    s.data =5; // direct access because it's public
    cout<<"struct data : "<< s.data<<endl;

    MyClass c;
    c.setData(10); //Must use public methods to access private member
    cout<<"Class data : "<<c.getData()<<endl;

    //aggregate initialization
    Color skyBlue ={135, 206, 235};
    Point p;
    p.x = 10;
    p.y =20;

    Rectangle rect; // define a variable of type rectangle
    rect.height = 10;
    rect.width =5;
    Person person1; // creating an instance of struct:

    person1.firstName = "Kerim";
    person1.lastName = "Gurbaz";
    person1.age = 37;

    cout<<"Name : "<<person1.firstName<<" "<<person1.lastName<<"\nAge : "<<person1.age<<endl;
    cout<<"Area : "<< rect.width * rect.height<<endl;
    cout<<"Point Coordinates : ( "<<p.x<<", "<<p.y<<" )"<<endl;

    cout<<"RGB: ("<<skyBlue.red<<", "<<skyBlue.green<<", "<<skyBlue.blue<<")"<<endl;
    return 0;
}