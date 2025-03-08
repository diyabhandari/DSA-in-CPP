//Given an integer n.Generate all possible combinations of well-formed parentheses of length 2 x N.
#include <bits/stdc++.h>
using namespace std;
class Solution {
  private:
      void findString(int i, int n, string parentheses, int opening, int closing, vector<string> &result){ //pass result by reference so that changes arent made to a copy of it instead
          if(opening+closing == 2*n && opening == closing){
              result.push_back(parentheses);
              return;
          }
          if(opening < n){
              findString(i+1, n, parentheses+'(', opening+1, closing, result); //explore path when we add opening bracket
          }      
          //returning after exploring ( path
          if(opening > closing){
              findString(i+1, n, parentheses+')', opening, closing+1, result); //explore path when we add closing bracket only if its number is less than number of opening bracket
          }
      }
  
  public:
      vector<string> generateParenthesis(int n) {
          vector<string> result;
          findString(1, n, "", 0, 0, result);
          return result;
      }
  };