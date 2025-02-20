#include <bits/stdc++.h>
using namespace std;
class Solution{
  private:
      int recursivePrimeCheck(int num, int divisor){
          if(divisor > sqrt(num)){ //there is no need to check further than sqaure root
              return 1;
          }
          if(num % divisor == 0){
              return 0;
          }
          return recursivePrimeCheck(num, divisor+1);
          
      }
  public:
    bool checkPrime(int num){
      if(num <= 1){
                return false;
            }
          if(num == 2){
                return true;
            }
            int divisor = 2;
            return recursivePrimeCheck(num,divisor);          
    }
};