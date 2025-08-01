#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int max_frequency_number(vector<int> &nums, int k, int &number) {
    //step 1: sorting
    sort(nums.begin(), nums.end());

    //step2: sliding window use determination and then initialization of vairables
    int max_frequency = 0;
    int n = nums.size();
    int left =0;
    long long current_sum = 0;

    //step3: iterate array through right pointer
    for(int right=0; right<n; right++){
        current_sum += nums[right];

        //step4: check if current window is valid? if  exceeds k
        long long window_size = right - left +1;
        long long cost = (long long)nums[right] * window_size - current_sum;

        // Step 5: If the window is invalid (cost > k), shrink it from the left.
            // We keep shrinking until the condition becomes valid again.
        while(cost > k){
            //subtract the leftmost element from current_sum
            current_sum -= nums[left];

            //move the left pointer to the right by one position
            left++;

            //recalculate the window size and cost
            window_size = right - left + 1;
            cost = (long long)nums[right] * window_size - current_sum; 
        }
         // Step 6: The current window [left, right] is now guaranteed to be valid.
        max_frequency = max(max_frequency, (int)window_size);


        //extra part
        // if(window_size > max_frequency) {
        //     number = nums[right]; // update the number with maximum frequency
        //     cout<<"Number with maximum frequency is: "<<number<<endl; // printing the number with maximum frequency
        // }
        //extra part
    }
    return max_frequency;
}


int main(){
    vector<int> nums= {1,2,4};
    int k=5;
    int number= 0;

    cout<<"max frequency number is: "<<max_frequency_number(nums, k, number)<<endl;

    // extended version of question is to print the number that has the maximum frequency


    return 0;
}