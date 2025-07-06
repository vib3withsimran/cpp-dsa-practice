#include<iostream>
using namespace std;
int main(){
    cout<<"columns= ";
    int columns;
    cin>>columns;
    for(int i=columns; i>=1; i--){
        for(int j=1; j<=i; j++){
        cout<<"* ";
        }
    cout<<endl;
    }
    return 0;
}