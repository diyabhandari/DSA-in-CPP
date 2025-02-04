#include <bits/stdc++.h>
class Solution{	
	public:
		string longestCommonPrefix(vector<string>& str){
            string result="";
            int i=0;
            int lastIndex = str.size()-1;
			std::sort(str.begin(),str.end());
            while(i < str[0].length() && i < str[lastIndex].length()){ //traverse the first and last strings 
                if(str[0][i]==str[lastIndex][i]){ //if characters at the same index are the equal, add them to the result
                    result+=str[0][i];
                    i++;
                }
                else{
                    return result;
                }
            }
            return result;
		}
};