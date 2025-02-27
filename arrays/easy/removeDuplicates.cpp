//Given an integer array nums sorted in non-decreasing order, remove all duplicates in-place so that each unique element appears only once. Return the number of unique elements in the array.


#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
      int removeDuplicates(vector<int>& nums) {
        int i = 0; //points to unique element
        for(int j = 1; j < nums.size(); j++){
          if(nums[i] != nums[j]){//unique element found
            i++;
            nums[i] = nums[j]; //update i to hold the unique value
          }
        }
        return i+1;
      }
  };