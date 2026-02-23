
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums= {-2, -3, -7, -2, -10, -4};

    int currSum = 0; 
    int maxSum = INT_MIN;
    int it= 0; 

    while(it < nums.size()){
        currSum += nums[it];
        maxSum = max(maxSum, currSum);

        if(currSum < 0){
            currSum = 0;
        }
        
        it++;
    }

    cout<<maxSum;

    return 0;
}