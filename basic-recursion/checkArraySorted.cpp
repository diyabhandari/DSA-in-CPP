#include <bits/stdc++.h>
using namespace std;
class Solution{	
  private:
      bool checkSorted(int left, int right, vector<int> &nums){
          if(right >= nums.size()){ //if we reach end of array without any problems, its sorted
              return true;
          }
          if(nums[left]>nums[right]){
              return false; //a larger number is placed before a smaller one, which is not allowed, hence recursion is stopped
          }
          //we can move to the next pair
          return checkSorted(left+1, right+1, nums);
      }
  public:
    bool isSorted(vector<int>& nums){
            if(nums.size() <= 1){
                return true; //array is already sorted
            }
            int left = 0;
            int right = left+1;
      return checkSorted(left, right, nums);
    }
};