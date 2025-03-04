/*
Given an integer array nums, find the subarray with the largest sum and return the sum of the elements present in that subarray.
A subarray is a contiguous non-empty sequence of elements within an array.
*/
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
      int maxSubArray(vector<int>& nums) {
           int max_sum = INT_MIN;
           int sum = 0; 
           for(int i = 0; i < nums.size(); i++){
              sum += nums[i];
              if(sum > max_sum){
                  max_sum = sum; 
              }
              if(sum < 0){
                  sum = 0; //we carry this forward only if its > 0, else we will reset it because it will generate no value
              }
           }
           return max_sum;
      }
  };