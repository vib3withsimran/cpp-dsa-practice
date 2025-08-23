#include<iostream>
using namespace std;
int main(){
    int i=10;
    int j=20;
    int k;
    
    k=i-- - i++ + --j - ++j + --i - j-- + ++i - j++;

    cout<<i<<endl;
    cout<<j<<endl;
    cout<<k<<endl;
    return 0;
}

//jo last mei hove se vhi likhan de
//i++ i mei 1add krke likh de, i ki value bi vhi rhe
//i-- i mei 1minus krke likh de, i ki value bi vhi rhe
//++i i hi yuhi likh de, i ki value 1add krke ho jayegi 
//--i i hi yuhi likh de, i ki value 1minus krke ho jayegi 
//smjhe?