//Given two sorted arrays nums1 and nums2, return an array containing the intersection of these two arrays.

#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
      vector<int> intersectionArray(vector<int>& nums1, vector<int>& nums2) {
        int i = 0; //iterator for nums1
        int j = 0; //iterator for nums2
        int len1 = nums1.size();
        int len2 = nums2.size();
        vector<int> intersectionArray;
        while(i < len1 && j < len2){
          if(nums1[i] < nums2[j]){
            i++; //we might find a match for j later in first array because both are sorted
          }
          else if(nums1[i] > nums2[j]){
            j++;
          }
          else if(nums1[i] == nums2[j]){
            if(intersectionArray.empty() || intersectionArray.back() != nums1[i]){
              intersectionArray.push_back(nums1[i]);
            }
            i++;
            j++;
          }
        }
        //we dont need to check for remaining elements as both arrays are sorted, if we reach the end of one array and not of the other, we cannot expect that any more matches for last element of first array will be found in second as all next elements of second will be greater or equal
        return intersectionArray;
      }
  };