//Given an integer array nums and a non-negative integer k, rotate the array to the left by k steps.
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void rotateArray(vector<int>& nums, int k) {
        k = k%(nums.size()); //if k == nums.size(), nums will return to the its initial value
        vector<int> temp;
        for(int i = 0; i < k; i++){ //store k values from nums
            temp.push_back(nums[i]);
        }
        for(int i = k; i < nums.size(); i++){
            nums[i-k] = nums[i]; //left rotate
        }
        for(int i = nums.size()-k; i < nums.size(); i++){
            nums[i] = temp[i-(nums.size()-k)]; //i starts at n-k, and we want temp to start from 0
        }
    }
};