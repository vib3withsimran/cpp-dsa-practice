#include<iostream>
using namespace std;
int main(){
    cout<<"hello world"<<endl;

    int a; //intergers 
    a=12;
    cout<<a<<endl;
    cout<<"size of a "<<sizeof(a)<<endl;

    float b; //float decimal nos. 
    b=1.2;
    cout<<b<<endl;
    cout<<"size of b "<<sizeof(b)<<endl;

    char c;  //specific no. to spcefic character
    c=12;
    cout<<c<<endl;
    cout<<"sie of c "<<sizeof(c)<<endl;

    bool d;  //only 0 or 1 value 
    d=12;
    cout<<d<<endl;
    cout<<"size of d "<<sizeof(d)<<endl;

    //void e;
    //cout<<"size of e"<<sizeof(e)<<endl;

    wchar_t f; 
    f=0;
    cout<<f<<endl;
    cout<<"size of f "<<sizeof(f)<<endl;

    double g;
    g=12;
    cout<<g<<endl;
    cout<<"size of g "<<sizeof(g)<<endl;

    return 0;
    
}

// ./variables