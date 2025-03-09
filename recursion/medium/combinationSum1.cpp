/*
Provided with a goal integer target and an array of unique integer candidates, provide a list of all possible combinations of candidates in which the selected numbers add up to the target. The combinations can be returned in any order.

A candidate may be selected from the pool an infinite number of times. There are two distinct combinations if the frequency if at least one of the selected figures differs.

The test cases are created so that, for the given input, there are fewer than 150 possible combinations that add up to the target.

If there is no possible subsequences then return empty vector.
*/
#include <bits/stdc++.h>
using namespace std;
class Solution {
  private:
      void findCombinations(int currentIndex, vector<int>& candidates, int target,vector<vector<int>>& result, vector<int> subsequence){
         if(currentIndex == candidates.size() || target <= 0){ //base condition
              if(target == 0){
                  result.push_back(subsequence);
                  return;
              }
              else{
                  return;
              }
          }
          subsequence.push_back(candidates[currentIndex]);
          findCombinations(currentIndex, candidates, target - candidates[currentIndex], result, subsequence); //including current element, not moving forward yet as it can be included again
          subsequence.pop_back();
          findCombinations(currentIndex+1, candidates, target, result, subsequence); //not including current element and moving forward
      }
  public:
      vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
          vector<vector<int>> result;
          findCombinations(0, candidates, target, result, {});
          return result;
      }
  };