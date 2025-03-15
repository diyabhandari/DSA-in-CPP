//Given an array nums where each integer in nums appears thrice except one. Find out the number that has appeared only once.
//the solution without bit manipulation is better
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
      int singleNumber(vector<int>& nums) { 
          sort(nums.begin(),nums.end());
          for(int i = 1; i < nums.size(); i+=3){ //we check the middle of each triplet
              if(nums[i-1] != nums[i]){ //triplet not formed
                  return nums[i-1];
              }
          }
          //if loop ends, last element was the unique one which was skipped over
          return nums[nums.size()-1];
      }
  };