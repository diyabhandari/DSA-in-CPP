#include <iostream>
int main(){
  int n=9;
  for(int i=0;i<n;i++){
    if(i<5){
      for(int stars=0;stars<i+1;stars++){
        std::cout<<"*";
      }
      for(int spaces=0;spaces<9-i*2-1;spaces++){
        std::cout<<" ";
      }
      for(int stars=0;stars<i+1;stars++){
        std::cout<<"*";
      }
      std::cout<<std::endl;
    }
    else{
      for(int stars=0;stars<9-i;stars++){
        std::cout<<"*";
      }
      for(int spaces=0;spaces<(i-4)*2;spaces++){
        std::cout<<" ";
      }
      for(int stars=0;stars<9-i;stars++){
        std::cout<<"*";
      }
      std::cout<<std::endl;
    }
    
  }
  return 0;
}