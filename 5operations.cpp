#include <iostream>
using namespace std;

int main(){
    
    // taking float data type for division operation
    float a = 50, b = 20;
    cout << "Arithmetic operation: a = 50, b = 20" << endl;
    cout << "Addition: " << a+b << endl;
    cout << "Subtraction: " << a-b << endl;
    cout << "Multiplication: " << a*b << endl;
    cout << "Division: " << a/b << endl;
    
    // taking int data type for comparison Relational operation
    cout << "=======================" << endl;
    cout << "Relational operation: a = 50, b = 20" << endl;
    cout << "Greater than: " << (a>b) << endl;
    cout << "Less than: " << (a<b) << endl;
    cout << "Greater than or equal to: " << (a>=b) << endl;
    cout << "Less than or equal to: " << (a<=b) << endl;    
    cout << "Equal to: " << (a==b) << endl;
    cout << "Not equal to: " << (a!=b) << endl;

    cout << "=======================" << endl;
    cout << "Unary operation: a = 50" << endl;
    cout << "Increment(a++): " << a++ << endl;
    cout << a << endl;
    cout << "Decrement(a--): " << a-- << endl;
    cout << a << endl;
/*
    int num1 = 50, num2 = 20;
    cout << "Enter the numbers(a,b) for addition: " <<endl;
    cin >> num1 >> num2;
    cout << "Addition: " << num1+num2 << endl;
*/
    return 0;
}