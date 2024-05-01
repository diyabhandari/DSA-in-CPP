#include <iostream>
using namespace std;
int main()
{
    int k=1,n=5;
    for(int i=0;i<n;i++){
        for(int j=n-i;j>=0;j--){
            cout<<" ";
        }
        int kcount=k;
        while(kcount>0){
            cout<<"*";
            kcount--;
        }
        for(int j=n-i;j>=0;j--){
            cout<<" ";
        }
        cout<<endl;
        k+=2;
    }
    return 0;
}