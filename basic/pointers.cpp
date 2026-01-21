#include<iostream>
using namespace std;
void changeA(int* ptr){
    *ptr = 20;
}

void changeB(int &b){
    b= 2000;
}
int main(){
    int a =10;
    cout<<"a= "<<a<<endl;

    int* ptr = &a;
    cout<<"ptr pointer= "<<ptr<<endl;
    cout<<"address of a= "<<&a<<endl;
    cout<<"address of ptr= "<<&ptr<<endl;
    
    int** ptr2 = &ptr;
    cout<<"*ptr pointer= "<<ptr2<<endl;

    //dereferencing operator
    cout<<"value at &ptr= "<<*(&a)<<endl;
    cout<<"value at *ptr= "<<*(ptr)<<endl;
    cout<<"value at **ptr2= "<<**(ptr2)<<endl;

    //pass by reference
    changeA(&a);
    cout<<a<<endl;
    

    //using alias
    int b= 100;
    changeB(b);
    cout<<"B: "<<b; 
    return 0;
}