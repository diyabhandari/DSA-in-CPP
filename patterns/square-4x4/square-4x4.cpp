#include <iostream>
int main(){
  int n=4,starCount=0; //even -> symmetry
  for(int i=0;i<(n/2);i++){
    for(int stars=1;stars<=2-i;stars++){
      std::cout<<"*";
      starCount=stars;
    }
    for(int spaces=1;spaces<=2*(2-starCount);spaces++){
      std::cout<<" ";
    }
    for(int stars=1;stars<=2-i;stars++){
      std::cout<<"*";
    }
    std::cout<<std::endl;
  }
  for(int i=(n/2);i<n;i++){
    for(int stars=1;stars<=i-1;stars++){
      std::cout<<"*";
      starCount=stars;
    }
    for(int spaces=1;spaces<=2*(2-starCount);spaces++){
      std::cout<<" ";
    }
    for(int stars=1;stars<=i-1;stars++){
      std::cout<<"*";
    }
    std::cout<<std::endl;
  }
  return 0;
}