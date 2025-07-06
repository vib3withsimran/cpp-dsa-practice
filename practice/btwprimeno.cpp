#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"tell me two numbers"<<endl;
    cin>>a>>b;
    cout<<"btween "<<a<<" and "<<b<<" following prime nos. lie"<<endl;
    for(int num=a;num<b;num++){
        int i;
        for(i=2;i<num;i++){
            if(num%i==0){
                break;
            }
        }
        if(i==num){
            cout<<num<<endl;
        }}
    return 0;
}