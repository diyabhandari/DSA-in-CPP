#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    //helper function to apply formula
    int nCr(int n, int r) {
        long long result = 1;
       for(int i = 0; i < r; i++){
           result *= (n-i);
           result /= (i+1);
       }
       return (int)result;
    }

public:
    
    void generate(int row, int col) {
        int result = nCr(row-1,col-1);
        cout<<result;
    }
};

int main() {
    int row = 5; 
    int col = 4;

    Solution sol; 

    //print element
    sol.generate(row, col);

    return 0;
}