/*
Given an array nums of n integers.Return sum of all subsets of the array nums.

Output can be printed in any order.
*/

#include <bits/stdc++.h>
using namespace std;
class Solution {
  private:
      void findSubsetSums(int index, vector<int>& nums, vector<int>& result, int sum){
          if(index == nums.size()){ //subset is complete
              result.push_back(sum);
              return;
          }
          findSubsetSums(index+1, nums, result, sum + nums[index]); //including current element
          findSubsetSums(index+1, nums, result, sum); //exlcuding current element
      }
  public:
      vector<int> subsetSums(vector<int>& nums) {
          vector<int> result;
          findSubsetSums(0, nums, result, 0);
          return result;
      }
  };