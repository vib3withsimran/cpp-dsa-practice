#include<iostream>
using namespace std;
int main(){
    int rows;
    cout<<"input a number= ";
    cin>>rows;

    for(int i=1; i<=rows; i++){
    int space=rows-i;
    for(int j=1; j<=space; j++){
        cout<<"  ";
    }
    for(int j=1; j<=rows; j++){
        cout<<"* ";
    }
    cout<<endl;
    }
    return 0;
}