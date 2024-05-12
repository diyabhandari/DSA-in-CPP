#include <iostream>
#include <cmath>
int main(){
  int n=4;
  for(int i=0;i<n;i++){
    for(int spaces=n-i-1;spaces>0;spaces--){
      std::cout<<" ";
    }
    char ch= char(64);
    for(int n_ch=0;n_ch<2*i+1;n_ch++){
      if(n_ch<=i){
        ch++;
        std::cout<<ch;
      }
      else if(n_ch>i){
        ch--;
        std::cout<<ch;
      }
    }
    
    for(int spaces=n-i-1;spaces>0;spaces--){
      std::cout<<" ";
    }
    std::cout<<std::endl;
  }
}