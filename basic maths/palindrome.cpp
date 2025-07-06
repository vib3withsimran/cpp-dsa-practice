#include<bits/stdc++.h>
using namespace std;

int main(){
    int x=121;
    int y=0, pop;
        if(x< 0){
            cout<<"false1";
        }
        else{
            while(x !=0){
                pop = x%10;
                x = x/10;
                y = y* 10 + pop; 
            }
            cout<<y<<" ";
            if(x == y){
                cout<<"true";
            }
            else{
                cout<<y;
            }
        }
        return 0;
}