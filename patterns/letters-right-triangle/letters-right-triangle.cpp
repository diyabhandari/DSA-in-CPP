#include <iostream>
int main(){
  int n=5;
  for(int i=0;i<n;i++){
    for(char ch='A';ch<='A'+i;ch++){
      std::cout<<ch;
    }
    std::cout<<std::endl;
  }  
  return 0;
}