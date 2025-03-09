//Given an array nums and an integer k.Return the number of non-empty subsequences of nums such that the sum of all elements in the subsequence is equal to k.
#include <bits/stdc++.h>
using namespace std;
class Solution{
  private:
      int findSubsequences(int index, vector<int>& nums, int requiredSum){
          if(index == nums.size()){ //subset has been formed (we have decided yes/no for each element)
              if(requiredSum == 0){
                  return 1; //1 valid subsequence found
              }
              return 0; //valid subsequence not found
          }
          return findSubsequences(index+1, nums, requiredSum) + findSubsequences(index+1, nums, requiredSum - nums[index]); //will sum up for all the valid ones
      }
  public:    	
      int countSubsequenceWithTargetSum(vector<int>& nums, int k){
          return findSubsequences(0, nums, k);
      }
};