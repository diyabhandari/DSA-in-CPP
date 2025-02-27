//Given an integer array of size n containing distinct values in the range from 0 to n (inclusive), return the only number missing from the array within this range.

#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
      int missingNumber(vector<int>& nums) {
          sort(nums.begin(),nums.end());
          int i = 0;
          for(i = 1; i < nums.size(); i++){
            if(nums[i]-nums[i-1]>1){
              return nums[i]-1;
            }
          }
          if(find(nums.begin(),nums.end(),0) == nums.end()){
            return 0;
          }
          return *max_element(nums.begin(),nums.end())+1; //for range 0-n, n itself was missing
      }
  };