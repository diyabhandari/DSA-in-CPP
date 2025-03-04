#include <bits/stdc++.h>
using namespace std;

class Solution {
private:

    int nCr(int n, int r) {
        long long result = 1;
        for(int i = 0; i < r; i++){
            result *= (n-i);
            result /= (i+1);
        }
        return (int)result; //calculate each element
    }

public:
    void generate(int n) {
       for(int i = 0; i < n; i++){ //rmr we take n-1 of row n, hence starting with 0
           int result = nCr(n-1,i); //no of total cols = nth row
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