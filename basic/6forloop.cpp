#include<iostream>
using namespace std;
int main(){
    cout<<"give me a number to add till it"<<endl;
    int n;
    cin>>n;
//for(initialisation,condition,update)
//body 
    int sum=0;
    for(int counter=1;counter<=n;counter++){
        sum=sum+counter;
        cout<<"+"<<counter;
    }
    cout<<endl;
    cout<<"sum= "<<sum<<endl;
    return 0;
}