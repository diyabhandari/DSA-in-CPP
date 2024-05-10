#include <iostream>
int main(){
  int n=4,spaces;
  for(int i=0;i<4;i++){
    for(int j=1;j<=i+1;j++){
      std::cout<<j;
    }
    spaces = 6-i*2;
    while(spaces>0){
      std::cout<<" ";
      spaces--;
    }
    for(int j=i+1;j>0;j--){
      std::cout<<j;
    }
    std::cout<<std::endl;
  }
}