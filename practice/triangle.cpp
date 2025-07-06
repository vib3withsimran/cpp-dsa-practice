#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"input three sides of triangle"<<endl;
    cin>>a>>b>>c;
    if(a==b && b==c){
        cout<<"equilateral triangle";
    }
    else if(a==b || b==c || c==a){
        cout<<"isosceles triangle";
    }
    else{
        cout<<"scalene triangle";
    }
    return 0;
}