#include <iostream>
using namespace std;

int main (){

    /*
    // Program to check if a number is even or odd
    int a;
    cout << "Enter the number: ";
    cin >> a;

    if (a == 0){
        cout << a <<" is neither positive nor negative ." << endl;
    }
    else if(a % 2 == 0){
        cout << a << " is even." << endl;
    }
    else{
        cout << a << " is odd." << endl;
    }*/

    /*
    // Program to vote on basis of age
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18){
        cout << "you are eligible to vote." << endl;
    }
    else{
        cout << "you are not eligible to vote." << endl;
    }*/


    /*
    // Program to check grade on basis of marks
    float marks;
    cout << "Enter your marks: ";
    cin >> marks;

    if (marks >= 90){
        cout << "Grade A" << endl;
    }
    else if (marks >= 80 && marks >= 89){
        cout << "Grade B" << endl;
    }
    else if (marks >= 70){
        cout << "Grade C" << endl;
    }
    else if (marks >= 60){
        cout << "Grade D" << endl;
    }
    else if (marks >= 50){
        cout << "Grade E" << endl;
    }
    else{
        cout << "Grade F" << endl;
    }*/


   /*
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    //ASCII value of ch between 97 and 122 is lowercase alphabet
    //ASCII value of ch is between 65 and 90 is uppercase alphabet

    // check if ch is an alphabet
    if (ch >= 'a' && ch <= 'z'){
        cout << "Lowercase alphabet." << endl;
    }

    else{
        cout << "Uppercase alphabet." << endl;
    }*/

   
   
   //check if a number is positive or negative
   int n;
   cout << "Enter a number: ";
   cin >> n;

   cout << (n >= 0 ? "Positive" : "Negative") << endl; 
   


    return 0;
}
