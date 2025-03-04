/*Given an integer array nums.Return all triplets such that:

i != j, i != k, and j != k
nums[i] + nums[j] + nums[k] == 0.
Notice that the solution set must not contain duplicate triplets. One element can be a part of multiple triplets. The output and the triplets can be returned in any order.*/
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
      vector<vector<int>> threeSum(vector<int>& nums) {
          int n = nums.size();
          
          set<vector<int>> result;
          for(int i = 0; i < n; i++){
              unordered_map<int,int> hashMap;
              for(int j = i+1; j < n; j++){
                  int amountNeeded = -(nums[i]+nums[j]); //amount needed to reach 0
                  if(hashMap.find(amountNeeded) != hashMap.end()){
                      vector<int> triplet = {nums[i],nums[j],amountNeeded};
                      sort(triplet.begin(),triplet.end());
                      result.insert(triplet);
                  }
                  else{
                      hashMap[nums[j]] = j; //store element at j before moving to next
                  }
              }
          }
          vector<vector<int>> v(result.begin(),result.end());
          return v;
      }
  };