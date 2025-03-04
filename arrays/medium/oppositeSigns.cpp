/*Given an integer array nums of even length consisting of an equal number of positive and negative integers.Return the answer array in such a way that the given conditions are met:
Every consecutive pair of integers have opposite signs.
For all integers with the same sign, the order in which they were present in nums is preserved.
The rearranged array begins with a positive integer.*/

#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
      vector<int> rearrangeArray(vector<int>& nums) {
          vector<int> result(nums.size(),0); //initialize
          int positiveIndex = 0; //result will start with a positive number
          int negativeIndex = 1; //negatives will always be at odd index, positives at even
          for(int i = 0; i < nums.size(); i++){
            if(nums[i] > 0){
              result[positiveIndex] = nums[i];
              positiveIndex += 2; //incremented to next even index
            }
            else{
              result[negativeIndex] = nums[i];
              negativeIndex += 2; //incremented to next odd index
            }
          }
          return result;
      }
  };