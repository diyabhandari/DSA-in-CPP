/*Given an integer array nums and an integer target. Return all quadruplets [nums[a], nums[b], nums[c], nums[d]] such that:

·      a, b, c, d are all distinct valid indices of nums.

·      nums[a] + nums[b] + nums[c] + nums[d] == target.

Notice that the solution set must not contain duplicate quadruplets. One element can be a part of multiple quadruplets. The output and the quadruplets can be returned in any order.
*/

class Solution {
  public:
      vector<vector<int>> fourSum(vector<int>& nums, int target) {
          vector<vector<int>> result;
          int n = nums.size();
          sort(nums.begin(),nums.end());
          for(int i = 0; i < n; i++){
              if(i > 0 && nums[i] == nums[i-1]) continue; //in order to avoid duplicates
              for(int j = i+1; j < n; j++){
                  if(j > i+1 && nums[j] == nums[j-1]) continue;
                  //2 pointer approach
                  int k = j+1;
                  int l = n-1;
                  while(k < l){
                      int sum = nums[i] + nums[j] + nums[k] + nums[l];
                      if(sum > target){ //we need a smaller number
                          l--;
                      }
                      else if(sum < target){ //we need a larger number
                          k++;
                      }
                      else{ //found a quadruplet
                          result.push_back({nums[i],nums[j],nums[k],nums[l]});
                          k++;
                          l--; //we dont want to calculate for the same pair again
                          while(k < l && nums[k] == nums[k-1]) k++; //skip over duplicates
                          while(k < l && nums[l] == nums[l+1]) l--;
                      }
                  }
              }
          }
          return result;
      }
  };