//Given an array of n integers, find the most frequent element in it i.e., the element that occurs the maximum number of times. If there are multiple elements that appear a maximum number of times, find the smallest of them.
#include <bits/stdc++.h>
class Solution {
public:
    int mostFrequentElement(vector<int>& nums) {   
        int hashSize = *max_element(nums.begin(),nums.end())+1;
        int hash[hashSize]; //initlialize empty hash
        for(int i=0;i<hashSize;i++){ //precomputation
            hash[i]=0;
        }
        for(int i=0;i<nums.size();i++){ //precomputation
            hash[nums[i]]++;
        }
        int mostFrequent=0;
        for(int i=1;i<hashSize;i++){
            if(hash[i]==hash[mostFrequent]) //we take the smaller element if no. of appearances are equal
                continue;
            if(hash[i]>hash[mostFrequent]){ 
                mostFrequent=i;
            }
        }
        return mostFrequent;
    }

    };
