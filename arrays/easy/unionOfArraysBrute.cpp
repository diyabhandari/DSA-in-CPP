//Given two sorted arrays nums1 and nums2, return an array that contains the union of these two arrays. The elements in the union must be in ascending order.
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
      vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
          //set data structure ensures that elements are sorted and unique
          set<int> result;
          int n = max(nums1.size(),nums2.size());
          for(int i = 0; i < n; i++){
            if(i < nums1.size()){
              result.insert(nums1[i]);
            }
            if(i < nums2.size()){
              result.insert(nums2[i]);
            }
          }
          vector<int> finalResult(result.begin(),result.end()); //copy result set to vector
          return finalResult;
      }
  };