//Given an array nums consisting of only 0, 1, or 2. Sort the array in non-decreasing order. The sorting must be done in-place, without making a copy of the original array.
#include <bits/stdc++.h>
using namespace std;
class Solution {

  public:
      void sortZeroOneTwo(vector<int>& nums) {
          int low = 0; 
          int mid = 0; //initially, the entire array is considered unsorted
          int high = nums.size()-1;
          while(mid <= high){
              if(nums[mid] == 0){
                  swap(nums[low],nums[mid]);
                  low++;
                  mid++;
              }
              else if(nums[mid] == 2){
                  swap(nums[high],nums[mid]);
                  high--; //mid is not incremented as the value swapped to mid position from high is not guaranteed to be 1. 
              }
              else if(nums[mid] == 1){
                  mid++;
              }
          }
              
      }
  };