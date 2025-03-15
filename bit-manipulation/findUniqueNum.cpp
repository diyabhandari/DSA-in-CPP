//Given an array of nums of n integers. Every integer in the array appears twice except one integer. Find the number that appeared once in the array.
#include <bits/stdc++.h>
using namespace std;
class Solution{    
  public:    
      int singleNumber(vector<int>& nums){
          int cumulativeXOR = 0;
          //by property of XOR, the XOR of duplicates will cancel out and give 0, and the XOR with unique num and 0 will give that num itself
          for(int i = 0; i < nums.size(); i++){
              cumulativeXOR = cumulativeXOR^nums[i];
          }
          return cumulativeXOR;
      }
  };