#include <bits/stdc++.h>
class Solution{	
	public:
		long long int factorial(int n){
			if(n<1){ //base condition, factorial of 0 is also 1
                return 1;
            }
            return n * factorial(n-1);
		}
};