//Given an array of n integers, find the sum of the frequencies of the highest occurring number and lowest occurring number.
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int secondMostFrequentElement(vector<int>& nums) {
        int hashSize = *max_element(nums.begin(),nums.end()) + 1;
        int hashMap[hashSize];
        for(int i=0;i<hashSize;i++){ //initialize the hashMap
            hashMap[i]=0;
        }
        for(int i=0;i<nums.size();i++){ //populate hashmap
            hashMap[nums[i]] += 1;
        }
        int secondMaxFreq = 0, secondMaxFreqElement = -1, maxFreq = 0, maxFreqElement = -1;
        for(int i = 0; i < hashSize; i++){
            if(hashMap[i] > maxFreq){ // only if the freq is greater, do we shift maxFreq to secondMax
                secondMaxFreq = maxFreq;
                secondMaxFreqElement = maxFreqElement;
                maxFreq = hashMap[i];
                maxFreqElement = i;
            }
            else if(hashMap[i] > secondMaxFreq && hashMap[i] < maxFreq){ // if freq is less than max but still greater than secondMax, only replace secondMax
            //the second part of the and statement is to ensure that the same freq isnt assigned to max and secondMax
                secondMaxFreq = hashMap[i];
                secondMaxFreqElement = i;
            }
            // we dont have to account for the case of equal freq, as the elements are already sorted from smallest to largest in hashing
        }
        return secondMaxFreqElement;
        
    }
};