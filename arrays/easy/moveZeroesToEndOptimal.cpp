//Given an integer array nums, move all the 0's to the end of the array. The relative order of the other elements must remain the same. This must be done in place, without making a copy of the array.
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
      void moveZeroes(vector<int>& nums) {
          int j = -1;
          for(int i = 0; i < nums.size(); i++ ){
              if(nums[i] == 0){
                  j = i; //found first 0
                  break;
              }
          }
          int i = j+1;
          while(i < nums.size()){
              if(j == -1){
                  break; //no zeroes
              }
              if(nums[i] != 0){
                  swap(nums[i],nums[j]);
                  j++;
                  i++;
              }
              if(nums[i] == 0){
                  i++;
              }
          }
      }
  };