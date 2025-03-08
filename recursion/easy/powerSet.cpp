//Given an array of integers nums of unique elements. Return all possible subsets (power set) of the array.

//Do not include the duplicates in the answer
#include <bits/stdc++.h>
using namespace std;
class Solution {
  private:
      void findSubsequences(int index, vector<int> nums, vector<vector<int>>& result, vector<int> subset){
          if(index == nums.size()){ //decision has been made for all elements in that path
              result.push_back(subset);
              return;
          }
          findSubsequences(index+1, nums, result, subset); //not including element at current index
          subset.push_back(nums[index]);
          findSubsequences(index+1, nums, result, subset);//including element at current index
      }
  public:	
      vector<vector<int> > powerSet(vector<int>& nums) {
          vector<vector<int>> result;
          findSubsequences(0, nums, result, {});
          return result;
      }
  };