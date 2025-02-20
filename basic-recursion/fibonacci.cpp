#include <bits/stdc++.h>
using namespace std;
//here, the first 0 is the 0th term (n=0)
class Solution {
  public:
      int fib(int n) {
          if (n == 0) { //there are two base cases as the first 2 in the series are given 0,1
              return n;
          }
          if ( n == 1){
              return n;
          }
          return fib(n-1) + fib(n-2); //F(3) = F(2) + F(1)
      }
  };