#include <iostream>
int main(){
  int starCount=1,n=9,flag=0;
  for(int i=0;i<n;i++){
    if(starCount<6&&flag==0){
      for(int j=starCount;j>0;j--){
        std::cout<<"*";
      }
      std::cout<<std::endl;
      starCount++;
      continue;
    }
    if(starCount==6)
      starCount-=1;
      flag=1;
    starCount-=1;
    for(int j=starCount;j>0;j--){
        std::cout<<"*";
      }
    std::cout<<std::endl; 

    
  }
}