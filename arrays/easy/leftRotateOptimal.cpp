//Given an integer array nums and a non-negative integer k, rotate the array to the left by k steps.
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void rotateArray(vector<int>& nums, int k) {
        k = k%(nums.size()); //if k == nums.size(), nums will return to the its initial value
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
        reverse(nums.begin(),nums.end());
    }
};