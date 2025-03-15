//Given the two integers, dividend and divisor. Divide without using the mod, division, or multiplication operators and return the quotient.

//The fractional portion of the integer division should be lost as it truncates toward zero.
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
      int divide(int dividend, int divisor) {
          int temp_dividend = abs(dividend); 
          int temp_divisor = abs(divisor);
          int quotient = 0;
          int p2 = 0;
          while(true){
              if(temp_divisor > temp_dividend) break;
              if(temp_divisor<<p2 <= temp_dividend){ //divisor*pow(2,p2) = divisor<<p2
                  p2++;
                  continue;
              }
              else{ //divisor<<p2 exceeds dividend, so take previous value of p2
                  p2--;
                  quotient += pow(2,p2);
                  temp_dividend -= temp_divisor<<p2; //update value for next iteration
                  p2 = 0; //clear for next iteration
              }
          }
          if(dividend<0 && divisor>0 || dividend>0 && divisor<0 ) quotient = -quotient; //if n or d negative, answer negative
          if(quotient > pow(2,31)-1) return INT_MAX;
          else if(quotient < pow(-2,31)) return INT_MIN;
          return quotient;
      }
  };