#include <bits/stdc++.h>
using namespace std;
class Solution{	
	public:		
		vector<char> reverseString(vector<char>& s){
            int len = s.size();
			for(int i = 0; i < len/2; i++ ){ // divide the string into 2 halves and swap the characters at opposite ends
                swap(s[i],s[len-i-1]);
            }
            return s;
		}
};