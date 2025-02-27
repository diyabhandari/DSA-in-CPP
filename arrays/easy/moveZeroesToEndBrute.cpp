//Given an integer array nums, move all the 0's to the end of the array. The relative order of the other elements must remain the same. This must be done in place, without making a copy of the array.
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
      void moveZeroes(vector<int>& nums) {
          vector<int> nonZeroElements;
          for(int i = 0; i < nums.size() ; i++){
              if(nums[i]!=0){
                  nonZeroElements.push_back(nums[i]); //store non-zero elements
              }
          }
          for(int i = 0; i < nonZeroElements.size(); i++){
              nums[i] = nonZeroElements[i]; //bring non zero elements to the front
          }
          for(int i = nonZeroElements.size(); i < nums.size(); i++){
              nums[i] = 0; //replace remaining places with 0
          }
      }
  };