//Given an array nums of length n, every integer in the array appears twice except for two integers. Identify and return the two integers that appear only once in the array. Return the two numbers in ascending order.
#include <bits/stdc++.h>
using namespace std;
class Solution{	
	public:		
		vector<int> singleNumber(vector<int>& nums){
            //separate the 2 unique nums into 2 buckets
            //find XOR of unique nums to find their points of difference
            int uniqueXOR = 0; //if bit is set as 1, that is a point of difference between the 2 unique numbers
            for(int i = 0; i < nums.size(); i++){
                uniqueXOR = uniqueXOR ^ nums[i];
            }
            //find rightmost point of difference, ie rightmost set bit
            int difference = (uniqueXOR&(uniqueXOR-1))^uniqueXOR;
            int xor1 = 0;
            int xor2 = 0;
            for(int i = 0; i < nums.size(); i++){
                if(nums[i]&difference){ //bucket1, when that bit is set
                    xor1 = xor1 ^ nums[i]; //cumulative xor to find the unique number
                }
                else{ //bucket2, when that bit is not set
                    xor2 = xor2 ^ nums[i];
                }
            }
            if(xor1>xor2)
                return {xor2,xor1};
            return {xor1,xor2};
		}
};