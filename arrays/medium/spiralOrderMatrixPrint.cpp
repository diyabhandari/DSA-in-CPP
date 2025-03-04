//Given an M * N matrix, print the elements in a clockwise spiral manner. Return an array with the elements in the order of their appearance when printed in a spiral manner.
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
      vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> spiralOrder;
          int rows = matrix.size();
          int columns = matrix[0].size();
          int left = 0; //left and right traverse columns
          int right = columns-1;
          int top = 0; //top and bottom traverse rows
          int bottom = rows-1;
          while(left <= right && top <= bottom){
            for(int i = left; i <= right; i++){ //going from left to right
              spiralOrder.push_back(matrix[top][i]); //top is constant, as row does not change to print left -> right 
            }
            top++; //we dont want the element at top row to be printed again
            for(int i = top; i <= bottom; i++){ //going down, right is constant but top is changing
              spiralOrder.push_back(matrix[i][right]);
            }
            right--;
            //edge case -> if there's a single row, we dont want this to be printed, so we must check top
            if(top <= bottom){
              for(int i = right; i >= left; i--){ //going right -> left
                spiralOrder.push_back(matrix[bottom][i]);
              }
              bottom--;
            }
            //edge case -> if we reach the innermost layer, ie when left has reached its limit, bottom -> top not printed. its also not printed when bottom >top, but that is already checked in the for loop
            if(left <= right){
              for(int i = bottom; i >= top; i--){ //going bottom -> top, left is constant 
                spiralOrder.push_back(matrix[i][left]);
              }
              left++;
            }
            
          }
          return spiralOrder;
      }
  };