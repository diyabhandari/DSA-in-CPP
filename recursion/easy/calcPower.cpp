//Implement the power function pow(x, n) , which calculates the x raised to n i.e. xn.
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
      double myPow(double x, int n) {
          if(n == 0){ //any number raised to 0 is 1
              return 1;
          }
          else if(n < 0){
              return myPow((1/x),-n); //rule of negative power
          }
          else if(n % 2 == 0){ //in case of even power we can half the power by squaring the base
              return myPow(x*x,n/2);
          }
          else if(n % 2 != 0){ //in case of odd power, we make it even
              return x*myPow(x,n-1);
          }     
      }
  };