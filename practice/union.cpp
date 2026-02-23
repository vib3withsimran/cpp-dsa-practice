#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> nums1 = {3, 4, 6, 7, 9, 9};
    vector<int> nums2= {1, 5, 7, 8, 8};

    int n = nums1.size();
    int m = nums2.size();

    vector<int> ans;
    int l1 =0, l2 =0;

    while(l1 < n && l2 < m){
        if(nums1[l1] < nums2[l2]){
            ans.push_back(nums1[l1]);
            l1++;
        }
        else if(nums2[l2] < nums1[l1]){
            ans.push_back(nums2[l2]);
            l2++;
        }
        else{
            ans.push_back(nums1[l1]);
            l1++;
            l2++;
        }
    }

    while(l1 < n){
        ans.push_back(nums1[l1]);
        l1++;
    }

    while(l2 < m){
        ans.push_back(nums2[l2]);
        l2++;
    }

    for(int i=0; i< ans.size(); i++){
        if(ans[i] == ans[i-1]){
            ans.erase(ans.begin() + i);
            
        }
    }

    for(int i: ans){
        cout<<i<<" ";
    }
    
    return 0;
}