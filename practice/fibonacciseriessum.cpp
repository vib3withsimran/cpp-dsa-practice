#include<iostream>
using namespace std;
int main(){
    cout<<"till how many terms do you want to know the sum of fibonacci series? ";
    int i;
    cin>>i;

    int n1=0;
    int n2=1;
    int sum=n1+n2;

    for(int sum1=2;sum1<=i;sum1++){
        int n3=n1+n2;
        sum=sum+n3;
        cout<<n1<<"+"<<n2<<"="<<n3<<endl;
        n1=n2;
        n2=n3;
    }
    cout<<"sum of first "<<i<<" fibonacci series is "<<sum<<endl;
    return 0;
}