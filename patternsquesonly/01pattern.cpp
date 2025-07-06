#include<iostream>
using namespace std;
int main(){
    int rows;
    cout<<"input a number= ";
    cin>>rows;

    for(int i=1; i<=rows; i++ ){
        for(int j=1; j<=i; j++){
            if((i+j)%2==0){
                cout<<1<<" ";
            }
            //if( i==j || i%2==0 && j%2==0 || i%2!=0 && j%2!=0)
            else{
                cout<<0<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}