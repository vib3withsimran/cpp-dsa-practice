#include<iostream>
using namespace std;
int main(){
    cout<<"what do you want to solve in an A.P.?"<<endl<<"1. Find SUM"<<endl<<"2. find nth term"<<endl<<"3. other"<<endl<<"(kindly just enter the number)"<<endl;
    int ap;
    cin>>ap;
    if(ap<3){
        int term1;
        cout<<"enter the 1st term of an AP= ";
        cin>>term1;
        int diff;
        cout<<"enter the difference between two terms= ";
        cin>>diff;
        int n;
        cout<<"enter the no. of terms= ";
        cin>>n;
        int a=n/2;
        int b=term1+n*diff-diff;

        if(ap==1){
            //formula of sum= n/2(2a+(n-1)d)
            
            cout<<a*b;
        }
        else{
            cout<<b;
        }
    }
    else{
        cout<<"we don't operate other functions currently, sorry for the inconvience!!";
    }
    return 0;
}