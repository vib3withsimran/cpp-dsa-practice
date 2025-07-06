#include<iostream>
using namespace std;
int main(){
    cout<<"input two nos. "<<endl;
    int a,b;
    cin>>a>>b;
    cout<<"input a operator";
    char op;
    cin>>op;
    switch (op)
    {
    case '+':
        cout<<a+b<<endl;
        break;
    case '-':
        cout<<a-b<<endl;
        break;
    case '*':
        cout<<a*b<<endl;
        break;
    case '/':
        cout<<a/b<<endl;
        break;
    case '%':
        cout<<a%b<<endl;
        break;
    default:
    cout<<"input another operator";
        break;
    }
    return 0;
}