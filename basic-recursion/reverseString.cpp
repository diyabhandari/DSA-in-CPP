#include <bits/stdc++.h>
using namespace std;
class Solution{	
private:
    void reverse(vector<char>& s, int left, int right){ //helper function as i couldnt edit the parameters of the given function, those need to remain same to pass the test cases
        if(left >= right){
            return;
        }
        swap(s[left],s[right]);
        reverse(s, left+1, right-1);
    }
public:		
	vector<char> reverseString(vector<char>& s){
		int left = 0;
        int right = s.size()-1;
        reverse(s, left, right);
        return s; //in-place reversal
	}
};