/*
Determine all possible set of k numbers that can be added together to equal n while meeting the following requirements:

There is only use of numerals 1 through 9.
A single use is made of each number.

Return list of every feasible combination that is allowed. The combinations can be returned in any order, but the list cannot have the same combination twice.
*/
#include <bits/stdc++.h>
using namespace std;
class Solution {
  private:
      void findCombinations(int index, int limit, int requiredSum, vector<int>& nums, vector<int>& subset, vector<vector<int>>& result){
          if(limit == 0){
              if(requiredSum == 0){
                  result.push_back(subset); //a valid combination found
                  return;
              }
              else{
                  return; //invalid combination
              }
          }
          else if(requiredSum < 0){
              return; //invalid combination, cannot continue further on this path
          }
          else if(index == nums.size()){ //no more elements left
              return;
          }
          findCombinations(index+1, limit, requiredSum, nums, subset, result); //not taking current element
          subset.push_back(nums[index]); //including current element
          findCombinations(index+1, limit-1, requiredSum - nums[index], nums, subset, result); 
          subset.pop_back(); //backtrack
      }
  public:
      vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> nums = {1,2,3,4,5,6,7,8,9};
          vector<vector<int>> result;
          vector<int> subset;
          findCombinations(0, k, n, nums, subset, result);
          return result;
      }
  };