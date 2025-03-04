//Given an N * N 2D integer matrix, rotate the matrix by 90 degrees clockwise.
//The rotation must be done in place, meaning the input 2D matrix must be modified directly.

#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
      void rotateMatrix(vector<vector<int>>& matrix) {
          //90 degrees of matrix is its transpose but with each row in reverse
          for(int i = 0; i < matrix.size(); i++){ 
              for(int j = 0; j < i; j++){ //j runs till i to avoid re-swapping
                  swap(matrix[i][j],matrix[j][i]); //transpose
              }
          }
          for(int i = 0; i < matrix.size(); i++){ //reverse each row
              reverse(matrix[i].begin(),matrix[i].end());
          }
      }
  };