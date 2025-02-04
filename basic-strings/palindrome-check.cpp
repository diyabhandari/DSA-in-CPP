#include <bits/stdc++.h>
class Solution{	
	public:		
		bool palindromeCheck(string& s){
            //copy and store the original string
            string original_string = s.substr(0);
			int len = s.size();
			for(int i = 0; i < len/2; i++ ){ // divide the string into 2 halves and swap the characters at opposite ends
                swap(s[i],s[len-i-1]);
            }
            return (original_string == s);
		}
};