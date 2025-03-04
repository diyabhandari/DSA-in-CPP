/*Given an integer array nums.Return all triplets such that:

i != j, i != k, and j != k
nums[i] + nums[j] + nums[k] == 0.
Notice that the solution set must not contain duplicate triplets. One element can be a part of multiple triplets. The output and the triplets can be returned in any order.*/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> result;
        for(int i = 0; i < nums.size(); i++){
            if(i > 0 && nums[i] == nums[i-1]) continue; //we dont want duplicates, also we cannot have negative index
            int j = i+1;
            int k = nums.size()-1;
            while(j < k){
                int amountNeeded = nums[i] + nums[j] + nums[k];
                if(amountNeeded < 0){ //we need a larger number
                    j++;
                }
                else if(amountNeeded > 0){ //we need a smaller number
                    k--;
                }
                else{ //we found a triplet
                    result.push_back({nums[i],nums[j],nums[k]});
                    j++; //we do not want to use the same values with i again
                    k--;
                    //to avoid duplicates
                    while(j < k && nums[j] == nums[j-1]) j++; //the j < k condition is put so that it doesnt run unnecessarily, when j has crossed k and next loop should be started
                    while(j < k && nums[k] == nums[k+1]) k--; //these loops dont add an extra O(N) because they are skipping values in the same pass, they are not creating a new pass like i or the while loop above
                    //number of steps taken by `j` and `k`, *including skipping duplicates*, is still bounded by O(n) within each iteration of the outer loop.
                }   
            }
        }
        return result;
    }
};