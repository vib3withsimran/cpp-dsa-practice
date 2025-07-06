#include <bits/stdc++.h>
using namespace std;

vector<int> maxSubsequence(vector<int>& nums, int k) {
    vector<pair<int, int>> vals;
    for (int i = 0; i < nums.size(); i++) {
        vals.emplace_back(i, nums[i]);
    }
    // Step 1: sort by value descending
    sort(vals.begin(), vals.end(), [](auto &x1, auto &x2) {return x1.second > x2.second;});
    // Step 2: take the first k elements
    vector<pair<int, int>> topk(vals.begin(), vals.begin() + k);
    // Step 3: sort the top k elements by original index
    sort(topk.begin(), topk.end(), [](auto &x1, auto &x2) {
        return x1.first < x2.first;
    });

    // Step 4: extract the values in original order
    vector<int> result;
    for (auto &p : topk) {
        result.push_back(p.second);
    }
    return result;
}

int main() {
    vector<int> nums = {2, 1, 3, 3};
    int k = 2;
    vector<int> res = maxSubsequence(nums, k);
    for (int v : res) {
        cout << v << " ";
    }
    return 0;
}