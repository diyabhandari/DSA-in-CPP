#include <iostream>
//at each position we print the distance of that position from the NEAREST side, +4
//they took cornermost value in the pattern as n
int main(){
  int n =4;
  for(int i=0;i<(2*n-1);i++){
    for(int j=0;j<(2*n-1);j++){
      int top=i,left=j,right=(2*n-2-j),bottom=(2*n-2-i);
      std::cout<< n-std::min(std::min(top,bottom),std::min(left,right))<<" " ; //min takes only two arguments
    }
    std::cout<<std::endl;
  }
  return 0;
}