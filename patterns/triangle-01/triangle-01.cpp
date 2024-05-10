#include <iostream>
int main(){
  int n=5,counter=2;
  for(int i=0;i<n;i++){
    counter=0;
    if(i%2==0){
      std::cout<<1;
      for(int j=i;j>0;j--){
        if(counter%2==0){
          std::cout<<0;
        }
        else{
          std::cout<<1;
        }
        counter++;
      }
    }
    else{
      counter=0;
      std::cout<<0;
      for(int j=i;j>0;j--){
        if(counter%2!=0){
          std::cout<<0;
        }
        else{
          std::cout<<1;
        }
        counter++;
      }
      counter=0;
    }
    std::cout<<std::endl;
    
    
  }
}