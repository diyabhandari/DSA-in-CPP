//Given an array of n integers, find the sum of the frequencies of the highest occurring number and lowest occurring number.
#include <bits/stdc++.h>
class Solution {
public:
    int sumHighestAndLowestFrequency(vector<int>& nums) {
        int hashSize = *max_element(nums.begin(),nums.end()) + 1;
        int hashMap[hashSize];
        for(int i=0;i<hashSize;i++){ //initialize the hashMap
            hashMap[i]=0;
        }
        for(int i=0;i<nums.size();i++){ //populate hashmap
            hashMap[nums[i]] += 1;
        }
        int highestFreq = INT_MIN, lowestFreq = INT_MAX; // default values, to be replaced
        for(int i = 0; i < hashSize; i++){ //finding the highest and lowest frequencies
            if(hashMap[i] > highestFreq){
                highestFreq = hashMap[i];
            }
            if(hashMap[i] > 0 && hashMap[i] < lowestFreq){ //we do not want to consider 0 frequency, that is elements that are not in the list
                lowestFreq = hashMap[i];
            }
        }
        return highestFreq+lowestFreq;
    }
};
