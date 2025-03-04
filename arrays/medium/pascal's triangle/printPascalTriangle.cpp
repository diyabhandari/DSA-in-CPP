#include <bits/stdc++.h>
using namespace std;
class Solution {
  private:
      vector<int> generateRow(int row){
          vector<int> resultRow;
          resultRow.push_back(1); //1 is first element of each row
          long long result =1;
          for(int col = 1; col < row; col++ ){ //finds each column of given row, stop at n-1
              result *= (row-col);
              result /= (col);
              resultRow.push_back((int)result);
          }
          return resultRow;
      }
  public:
      vector<vector<int>> pascalTriangle(int numRows) {
          vector<vector<int>> result; 
          for(int i = 1; i <= numRows; i++){ //n-1 handled in generateRow
              result.push_back(generateRow(i));
          }
          return result;
      }
  };