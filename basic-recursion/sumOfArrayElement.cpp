#include <bits/stdc++.h>
using namespace std;
class Solution{	
	public:
        int i = 0;
		int arraySum(vector<int>& nums){
            if(nums.size()==1){
                return nums[0];
            }
            vector<int> numsLeft(nums.begin()+1,nums.end());
            return nums[0] + arraySum(numsLeft); //pick out the first element each time and call the function for the remaining elements
		}
};