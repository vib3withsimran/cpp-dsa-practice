#include<iostream>
using namespace std;
int main(){
    cout<<"check prime and non prime no."<<endl;
    int n;
    cin>>n;
    int i;
    for(i=2;i<n;i++){
        if(n%i==0){
            cout<<"non-prime no."<<endl;
            break;
        }
    }
    if(i==n){
    cout<<"prime no."<<endl;
    }
    return 0;
}