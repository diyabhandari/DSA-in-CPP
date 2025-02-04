#include <bits/stdc++.h>
class Solution{	
	public:
		bool rotateString(string& s,string& goal){
			for(int i=0; i<s.length(); i++){
        if(s==goal){
          return true;
        }
        else{
          s = s.substr(1,s.length()-1) + s[0]; //this operation takes O(N) and is repeated N times
          //take out the first character and add it to the end of the string to perform shifting
        }
      }
      return false; //after all possible shifts, s and goal still not equal
		}
};