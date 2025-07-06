#include<iostream>
using namespace std;
int main(){
    cout<<"tell me no. of rows and no. of columns "<<endl;
    int row, col;
    cout<<"rows= ";
    cin>>row;
    cout<<endl;
    cout<<"column= ";
    cin>>col;

    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            cout<<"* ";
        }
    cout<<endl;
    }
    return 0;
}