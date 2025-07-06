#include<iostream>
using namespace std;
int main(){
    cout<<"till which no. do you want to get the odd nos.= ";
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i%2==0){
            continue;
        }
        cout<<i<<endl;
    }
    return 0;
}