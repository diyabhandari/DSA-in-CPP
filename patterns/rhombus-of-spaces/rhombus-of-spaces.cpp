#include <iostream>
int main(){
  int n=5;
  for(int i=0;i<n;i++){
    for(int j=0;j<n-i;j++){
      std::cout<<"*";
    }
    for(int s=0;s<i*2;s++){
      std::cout<<" ";
    }
    for(int j=0;j<n-i;j++){
      std::cout<<"*";
    }
    std::cout<<std::endl;
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<i+1;j++){
      std::cout<<"*";
    }
    for(int s=0;s<8-2*i;s++){
      std::cout<<" ";
    }
    for(int j=0;j<i+1;j++){
      std::cout<<"*";
    }
    std::cout<<std::endl;
  }
}