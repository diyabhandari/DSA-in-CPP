#include <bits/stdc++.h>
class Solution{	
public:		
    string largeOddNum(string& s){
        int lastDigitIndex,temp; //temp stores the char->int value of elements of the string
        for(int i = s.length()-1; i>=0; i--){ //find out upto which digit in the number we can take a valid substring
            temp = s[i] - '0'; //converts s[i] to int
            if(temp%2!=0){
                lastDigitIndex=i; //store the position
                break; //we found the odd digit closest to the end of the string
            }
        }
        int i=0;
        while(i<=lastDigitIndex && s[i]=='0') i++; //skip leading 0s
        // <= is used for cases like 0001, which would otherwise stop at i=2, giving a leading 0 in output
          
        return s.substr(i,(lastDigitIndex-i)+1); //use positions found earlier to get required substring
    }
};