#include<iostream>
#include<math.h>
using namespace std;

// int length(int x){
//     int count=0, y=x;
//     while(y!=0){
//         y = y/10;
//         count++;
//     }
//     return count;
// }


// Using pow from <math.h> in C++ returns a double, which can introduce precision errors when casting back to int.These rounding issues can cause the Armstrong number check to fail incorrectly.
int armstrongnum(int x, int length){
    int sum=0, y=x ;
    while(y!=0){
        int z = y%10;
        sum = sum + static_cast<int>(round(pow(z, length)));
        y = y/10;
    }
    return sum;
}

int main(){
    int val = 153;

    // int lengthVal = length(val);
    int lengthVal = to_string(val).length();
    int finalVal = armstrongnum(val, lengthVal);

    if(val == finalVal){
        cout<<"it is armstrong number";
    }
    else{
        cout<<"not an armstrong number";
    }

    return 0;
}