#include<iostream>
using namespace std;
int main(){
    cout<<"give me three numbers to know the maximum no. from given nos."<<endl;
    int a,b,c;
    cin>>a>>b>>c;
    cout<<"maximum no. is: ";
    if(a>b){
        if(a>c){
            cout<<a<<endl;
        }
        else{
            cout<<c<<endl;
        }
    }
    else{
        if(b>c){
            cout<<b<<endl;
        }
        else{
            cout<<c<<endl;
        }
    }
    return 0;
}