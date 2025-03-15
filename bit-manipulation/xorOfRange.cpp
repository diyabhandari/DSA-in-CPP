//Given two integers L and R. Find the XOR of the elements in the range [L , R].
#include <bits/stdc++.h>
using namespace std;
class Solution{	
  private:
      int findXOR(int lb, int ub){
          int n = ub-lb+1;
          if(n%4 == 1) return 1;
          else if(n%4 == 2) return n+1;
          else if(n%4 == 3) return 0;
          else return n;
      }
public:
  int findRangeXOR(int l,int r){
    int xor1 = findXOR(1,l-1); //values not part of given range
          int xor2 = findXOR(1,r); //includes values part and not part of range
          int rangeXOR = xor1^xor2; //cancel out values not part of the given range
          return rangeXOR;
  }
};