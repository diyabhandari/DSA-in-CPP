#include <bits/stdc++.h>
using namespace std;

class Solution {

public:
    void generate(int n) {
        int row = n;
        long long result = 1;
        cout<<" "<<result; //first element of each row is 1
       for(int col = 1; col < row; col++){ //nth row has n elements, with 0 based column indexing we can derive a simple formula
           result *= (row-col); //each result compounds on the last
           result /= (col);
           cout<<" "<<result;
       }
    }
};

int main() {
    int n = 5; 

    Solution sol; 

    // Print Pascal's Triangle row for row n
    sol.generate(n);

    return 0;
}