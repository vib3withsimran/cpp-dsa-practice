#include<iostream>
using namespace std;
int main(){
    cout<<"input a character= ";
    char a;
    cin>>a;
    switch (a)
    {
    case 'a':
    case 'A':
        cout<<"hello"<<endl;
        break;
    case 'b':
    case 'B':
        cout<<"nameste"<<endl;
        break;
    case 'c':
    case 'C':
        cout<<"hola"<<endl;
        break;
    case 'd':
    case 'D':
        cout<<"ciao"<<endl;
        break;
    case 'e':
    case 'E':
        cout<<"bonjour"<<endl;
        break;

    default:
    cout<<"i'm still learning more languages"<<endl;
        break;
    }
    return 0;
}