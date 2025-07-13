#include<iostream>
#include<vector>
using namespace std;

int main(){
    int x= 1483;
    vector<int> divisors;

    for(int i=1; i <= x; i++){
        if(x%i == 0){
            divisors.push_back(i);
        }
        else{
            continue;
        }
    }
    if(divisors.size() > 2 ){
        cout<<"Not a Prime Number"<<endl;
    }else{
        cout<<"Prime number"<<endl;
    }

    cout<<"Divisor of "<<x<<": "<<endl;
    for(auto i: divisors){
        cout<<i<<" ";
    }
    return 0;
}