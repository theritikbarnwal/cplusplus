#include <iostream>
using namespace std;

int main(){
    // char is used to store a single character and string is used to store a sequence of characters.     
    string name = "Ritik";
    int age = 21;
    float pie = 3.14;
    double price = 199.99;
    bool issafe = true; // true = 1 and false = 0

    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Float value: " << pie << endl;
    cout << "Double value: " << price << endl;
    cout << "Boolean value: " << issafe << endl;
    cout << "size of data types: \n" << sizeof(name) << "\n" << sizeof(age) << '\n' << sizeof(pie) << '\n' << sizeof(price) << '\n' << sizeof(issafe) << endl;
    return 0;
}

/*
primitive data types
char
int
string
double
float
boolean*/



