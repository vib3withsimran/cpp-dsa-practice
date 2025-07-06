#include<iostream>
using namespace std;
int main(){
    cout<<"table of which number? ";
    int n;
    cin>>n;
    for(int i=1;i<=10;i++){
        cout<<n<<"*"<<i<<"="<<n*i<<endl;
    }
    return 0;
}