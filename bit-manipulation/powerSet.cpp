//Given an array of integers nums of unique elements. Return all possible subsets (power set) of the array.

//Do not include the duplicates in the answer.
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:	
      vector<vector<int> > powerSet(vector<int>& nums) {
          int n = nums.size();
          int num_of_subsets = 1<<n; //2^n
          vector<vector<int>> result;
          //the number of subsets is equal to the number of binary numbers that can be generated with n number of digits
          //let each binary number represent an element in the power set, with digit 1 denoting that index element is present 
          for(int i = 0; i < num_of_subsets; i++){
              vector<int> subset;
              for(int j = 0; j < n; j++){ //for each bit of num i, check whether that bit is set
                  if(i & (1<<j)){ //returns true if jth bit is set
                      subset.push_back(nums[j]);
                  }
              }
              result.push_back(subset);
          }
          return result;
      }
  };