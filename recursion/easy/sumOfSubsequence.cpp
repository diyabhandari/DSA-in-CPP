//Given an array nums and an integer k. R﻿eturn true if there exist subsequences such that the sum of all elements in subsequences is equal to k else false.

#include <bits/stdc++.h>
using namespace std;
class Solution{
  private:
      bool findSubsequences(int index, vector<int>& nums, int requiredSum){
          if(index == nums.size()){ //subset has been formed
              return requiredSum == 0; //check whether sum is 0 if all elements of subsequence are found
          }
          return findSubsequences(index+1, nums, requiredSum - nums[index]) || findSubsequences(index+1, nums, requiredSum); //return will exit the function, if these statements are placed one after another the second one is never executed      
      }
  public:
      bool checkSubsequenceSum(vector<int>& nums, int k) {
          return findSubsequences(0, nums, k); //here we dont need to keep track of subsets or power set
      }
};