//Given an integer array nums, which can have duplicate entries, provide the power set. Duplicate subsets cannot exist in the solution set. Return the answer in any sequence.
#include <bits/stdc++.h>
using namespace std;
class Solution {
  private:
      void findPowerset(int index, vector<int>& nums, vector<vector<int>>& result, vector<int>& subset){
          if(index == nums.size()){
              result.push_back(subset);
              return;
          }
          subset.push_back(nums[index]); //including the current element
          findPowerset(index+1, nums, result, subset);
          subset.pop_back(); //backtrack
          //if we are excluding an element, we want to exclude all occurrences of it to avoid duplicate subsets 
          for(int i = index+1; i < nums.size(); i++){
              if(nums[i] != nums[index]){
                  findPowerset(i, nums, result, subset);
                  return; //this return wont be executed if only duplicates are left
              }
          }
          //control reaches here when no more unique elements left, in that case end the recursion on this path
          findPowerset(nums.size(), nums, result, subset);
      }
  public:
      vector<vector<int>> subsetsWithDup(vector<int>& nums) {
          vector<vector<int>> result;
          vector<int> subset;
          sort(nums.begin(),nums.end());
          findPowerset(0, nums, result, subset);
          return result;
      }
  };