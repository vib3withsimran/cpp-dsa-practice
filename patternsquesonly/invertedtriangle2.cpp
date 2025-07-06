#include<iostream>
using namespace std;
int main(){
    cout<<"no. of columns= ";
    int columns;
    cin>>columns;
    
    for(int i=1; i<=columns; i++){
        for(int j=1; j<=columns; j++){
            if(j<=columns-i){
                cout<<"  ";
            }
            else{
                cout<<"* ";
            }
        }
        cout<<endl;
        }
         
    return 0;
}