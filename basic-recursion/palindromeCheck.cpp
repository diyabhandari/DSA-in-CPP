#include <bits/stdc++.h>
using namespace std;
class Solution{	
  private:
      void reverse(string& s, int left, int right){ 
          if(left >= right){
              return;
          }
          swap(s[left],s[right]);
          reverse(s, left+1, right-1);
      }
  public:		
    bool palindromeCheck(string& s){
            string original_s = s.substr();
      int left = 0, right = s.size()-1;
            reverse(s,left,right);
            return s==original_s;
    }
};