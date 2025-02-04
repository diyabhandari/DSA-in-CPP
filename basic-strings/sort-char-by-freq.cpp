//You are given a string s. Return the array of unique characters, sorted by highest to lowest occurring characters.
//If two or more characters have same frequency then arrange them in alphabetic order.
#include <bits/stdc++.h>
using namespace std;
class Solution{	
	public:
		vector<char> frequencySort(string& s){
			vector<char> result;
			vector<int> charHash(26,0); //for the 26 lowercase alphabets
			for(int i = 0; i < s.size(); i++){//store freq of each char in hash
				charHash[s[i]-97]++; ////ASCII of a -> 97, and in hash a is represented by index 0
			}
			for(int i = 0; i < charHash.size(); i++){
				int maxFreq = *max_element(charHash.begin(),charHash.end()); //take out the max element
				if(maxFreq < 1)
					break;
				auto maxFreqIterator = find(charHash.begin(),charHash.end(),maxFreq); //find the first occurrence of the max freq
				int maxFreqIndex = distance(charHash.begin(),maxFreqIterator); //find the index 
				char toPush = maxFreqIndex+'a'; //get the character
				result.push_back(toPush); //store in result
				charHash[maxFreqIndex] = -1; //set as checked
			}
			return result;

		}
};