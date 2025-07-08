#include<iostream>
using namespace std;

int main(){
    int x= 12;

    cout<<"Divisor of"<<x<<": "<<endl;
    for(int i=1; i <= x; i++){
        if(x%i == 0){
            cout<<i<<" ";
        }
        else{
            continue;
        }
    }
    return 0;
}