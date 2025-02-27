#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
      int findMaxConsecutiveOnes(vector<int>& nums) {
          vector<int> consecutiveOnesCount; //store count of all consecutive occurrences
          int maxConsecutiveOnes = 0;
          for(int i = 0; i < nums.size(); i++){
              if(nums[i] == 1){
                  maxConsecutiveOnes++;
              }
              else{
                  consecutiveOnesCount.push_back(maxConsecutiveOnes);
                  maxConsecutiveOnes = 0; //reset
              }
          }
          consecutiveOnesCount.push_back(maxConsecutiveOnes); //the last count must be added separately in case given string ends with 1s
              
          return *max_element(consecutiveOnesCount.begin(),consecutiveOnesCount.end()); //pick the maximum from the store
      }
  };