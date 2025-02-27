//Given two sorted arrays nums1 and nums2, return an array that contains the union of these two arrays. The elements in the union must be in ascending order.
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
      vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
          int i = 0; //iterator for first array
          int j = 0; //iterator for second array
          int len1 = nums1.size();
          int len2 = nums2.size();
          vector<int> unionArray;
  
          while(i < len1 && j < len2){
            if(nums1[i] <= nums2[j]){
              if(unionArray.empty() || unionArray.back() != nums1[i] ){ //add element if it is not matching with the previous element. this works because both arrays are sorted
                unionArray.push_back(nums1[i]);
                
              }
              i++;
            }
            else if(nums2[j] < nums1[i]){
              if(unionArray.empty() || unionArray.back() != nums2[j] ){ //add element if it is not matching with the previous element. this works because both arrays are sorted
                unionArray.push_back(nums2[j]);
                
              }
              j++;
            }
          }
          while(i < len1){ //add leftover elements
            if(unionArray.back() != nums1[i] || unionArray.empty()){ //add element if it is not matching with the previous element. this works because both arrays are sorted
                unionArray.push_back(nums1[i]);
              }
              i++;
          }
          while(j < len2){
            if(unionArray.back() != nums2[j] || unionArray.empty()){ //add element if it is not matching with the previous element. this works because both arrays are sorted
                unionArray.push_back(nums2[j]);
              }
              j++;
          }
          return unionArray;
      }
  };