#include <iostream>
int main(){
  int n=5;
  for(int i=0;i<n;i++){
    for(char ch='E'-i;ch<='E';ch++){
      std::cout<<ch;
    }
    std::cout<<std::endl;
  }
  return 0;
}