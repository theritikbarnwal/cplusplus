// type casting: implicit and explicit
#include <iostream>
using namespace std;

int main(){
    // implicit type casting
    char grade = 'R';
    int value = grade;
    cout << "value of grade: " << value <<endl;


    // explicit type casting
    float price = 199.99;
    int newprice = int(price);
    cout << "new price: " << newprice << endl;

    return 0;
}

