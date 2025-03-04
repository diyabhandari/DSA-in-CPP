/*Given an array of integers nums and an integer target. Return the indices(0 - indexed) of two elements in nums such that they add up to target.
Each input will have exactly one solution, and the same element cannot be used twice. Return the answer in non-decreasing order.*/

#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
      vector<int> twoSum(vector<int>& nums, int target) {
          unordered_map<int,int> hashMap;
          for(int i = 0; i < nums.size(); i++){
              int toFind = target - nums[i]; //calculate the required element
              if(hashMap.find(toFind) != hashMap.end()){
                  return {hashMap[toFind],i}; //return indices
              }
              else{ //we have to continue searching
                  hashMap[nums[i]] = i;
              }
          }
          return {-1,-1}; //two sum not found
          
      }
  };