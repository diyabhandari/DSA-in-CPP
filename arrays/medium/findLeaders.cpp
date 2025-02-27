//Given an integer array nums, return a list of all the leaders in the array.



//A leader in an array is an element whose value is strictly greater than all elements to its right in the given array. The rightmost element is always a leader. The elements in the leader array must appear in the order they appear in the nums array.

#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
      vector<int> leaders(vector<int>& nums) {
        vector<int> leadersArray;
        int len = nums.size();
        int currentMax = len - 1; //keeps track of leader, set to rightmost intially
        leadersArray.push_back(nums[currentMax]);
        for(int i = len - 2; i >= 0; i--){
          if(nums[i] > nums[currentMax]){
              currentMax = i; //position updated
              leadersArray.push_back(nums[currentMax]);
          }
        }
        reverse(leadersArray.begin(),leadersArray.end());
        return leadersArray;
      }
  };