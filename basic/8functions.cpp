#include<iostream>
using namespace std;
#include <algorithm>


//pass by value a
//pass by reference &a
//pass by pointer *a

void passByValue(int a) {
    a = 10; // This will not change the original variable
}
void passByReference(int &a) {
    a = 20; // This will change the original variable
}
//passbby Reference is simar to pass by pointer
void passByPointer(int *a) {
    *a = 30; // This will change the original variable
}

int main(){
    int x=5;
    cout << "Before passByValue: " << x << endl;
    passByValue(x);
    cout << "After passByValue: " << x << endl; // x remains 5
    passByReference(x);
    cout << "After passByReference: " << x << endl; // x is now 20
    passByPointer(&x);
    cout << "After passByPointer: " << x << endl; // x is now 30

    //inbuilt functions

    // returns maximum value between two
    // numbers
    cout << "max no"<< max(3, 6);
    return 0;
}
