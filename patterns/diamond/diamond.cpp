#include <iostream>
int main(){
  int n=5,k=-1;
  for(int i=0;i<n;i++){
    k+=2;
    for(int j=n-i;j>=0;j--){
      std::cout<<" ";
    }
    int kcount=k;
    while(kcount>0){
      std::cout<<"*";
      kcount--;
    }
    for(int j=n-i;j>=0;j--){
      std::cout<<" ";
    }
    std::cout<<std::endl; 
  }

  for(int i=0;i<n;i++){
    std::cout<<" "; //formatting for alignment
    for(int j=i;j>=0;j--){
      std::cout<<" ";
    }
    int kcount=k;
    while(kcount>0){
      std::cout<<"*";
      kcount--;
    }
    for(int j=i;j>=0;j--){
      std::cout<<" ";
    }
    std::cout<<std::endl; 
    k-=2;
  }

  
  return 0;
}