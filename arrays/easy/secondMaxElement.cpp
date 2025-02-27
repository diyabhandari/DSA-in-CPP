#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
      int secondLargestElement(vector<int>& nums) {
          int maxElement = nums[0];
          int secondMaxElement = -1;
          for(int i = 0; i < nums.size(); i++){
              if(nums[i] > maxElement){
                  secondMaxElement = maxElement;
                  maxElement = nums[i];
              }
              if(nums[i] < maxElement && nums[i] > secondMaxElement){
                  secondMaxElement = nums[i];
              }
          }
          return secondMaxElement;
        
      }
  };