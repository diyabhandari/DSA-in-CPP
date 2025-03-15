//Given two integers start and goal. Flip the minimum number of bits of start integer to convert it into goal integer.
#include <bits/stdc++.h>
using namespace std;
class Solution{   
  public:    
      int minBitsFlip(int start, int goal) { 
          //the minimum number of bits to flip is the number of set bits in the XOR of start and goal
          //in the XOR of start and goal, only those bits will be set where start and goal have different bits placed
          int xorResult = start^goal;
          //finding set bits by turning off rightmost set bits one by one
          int minBits = 0;
          while(xorResult != 0){
              xorResult = xorResult&(xorResult-1);
              minBits++;
          }
          return minBits;
      }
  };