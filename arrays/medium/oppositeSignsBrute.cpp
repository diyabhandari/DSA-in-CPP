/*Given an integer array nums of even length consisting of an equal number of positive and negative integers.Return the answer array in such a way that the given conditions are met:
Every consecutive pair of integers have opposite signs.
For all integers with the same sign, the order in which they were present in nums is preserved.
The rearranged array begins with a positive integer.*/

#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
      vector<int> rearrangeArray(vector<int>& nums) {
          vector<int> positiveNums;
          vector<int> negativeNums;
          vector<int> result;
          for(int i = 0; i < nums.size(); i++){
            if(nums[i] >= 0){
              positiveNums.push_back(nums[i]);
            }
            else{
              negativeNums.push_back(nums[i]);
            }
          }
          //it is given that nums has even length and positiveNums and negativeNums have equal legnths
          int lenPositive = nums.size()/2;
          for(int i = 0; i < lenPositive; i++){
            result.push_back(positiveNums[i]); //result starts with positive number
            result.push_back(negativeNums[i]); 
          }
          return result;
      }
  };