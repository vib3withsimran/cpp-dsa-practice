#include<iostream>
using namespace std;
int main(){
    int rows;
    cout<<"input a number= ";
    cin>>rows;
    int space=rows/2;
    for(int i=1; i<=rows; i++){
        for(int j=1; j<=rows-i; j++){
        printf("  ");
        }
        for(int k=1; k<=i; k++){
                cout<<k<<" ";}
        for(int z=i-1; z>=1; z--){
                printf("%d ", z); 
            }
        printf("\n");
        }
    return 0;
}