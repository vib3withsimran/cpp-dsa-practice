#include<iostream>
using namespace std;

int Hcf(int n1, int n2){
    for(int i= min(8,9); i>0; i--){
        if(n1%i == 0 && n2%i == 0){
            return i;
        }
    }
    return 1;
}

int main(){
    int n1= 8;
    int n2 = 16;
    
    int hcf = Hcf(n1, n2);
    cout<<hcf;

    return 0;
}