#include <bits/stdc++.h>
class Solution{	
	public:
		bool anagramStrings(string& s,string t){ 
      if(s.length() != t.length()){ //to be anagram, both must have same length
        return false;
      }
      int charHash[26]; //will store no. of occurrences of each character
      for(int i=0; i<26; i++){
        charHash[i] = 0; //initialise
      }
      for(int i=0; i<s.length(); i++){ //store no. of occurences of characters in s
        charHash[s[i]-97]+=1;//lowercase letters start at ascii 65
        charHash[t[i]-97]-=1; //subtract from s characters' no. of occurrences when that char is found in t
      }
      for(int i=0; i<26; i++){
        if(charHash[i]==0){
            continue;
        }
        else{
            return false;
        }
      }
      return true; //all occurrences of t characters canceled out those of s, meaning they have the same characters in the same number


      /*brute force
      //if on sorting the characters, both strings are equal, then t is anagram of s
      std::sort(s.begin(),s.end());
      std::sort(t.begin(),t.end());
      return s==t;
      */

		}
};