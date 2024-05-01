#include <iostream>
int main(){
  int k=9,n=5;
  for(int i=0;i<n;i++){
    for(int j=i;j>=0;j--){
      std::cout<<" ";
    }
    int kcount =k;
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
}