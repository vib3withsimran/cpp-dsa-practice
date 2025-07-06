#include<iostream>
using namespace std;
int countDigit(int n){
    int count=0;
    while(n>0){
        count++;
        n = n/10;
    }
    return count;
}
int main(){
    int n;
    cout<<"enter a number: "<<endl;
    cin>>n;
    if(n>= 0){
        cout<<"total no. of digits present: "<<endl;
        cout<<countDigit(n);
    }
    else{
        cout<<"invalid input";
    }
    return 0;

}