#include<bits/stdc++.h>
using namespace std;

void Sieprinkski(int n){
    for(int y= n-1; y>= 0; y--){
        for(int i=0; i<y; i++){
            cout<<" ";
        }
        for(int x=0; x+y<n; x++){
            if(x&y){
                cout<<" "<<" ";
            }
            else{
                cout<<"* ";
            }
        }
        cout<<endl;
    }

}


int main(){
    
    int n=3;
    if(n < 0){
        cout<<"Invalid input. Please enter a non-negative integer."<<endl;
        return 1;
    }
    else {
        Sieprinkski(n);
    }
    return 0;
}