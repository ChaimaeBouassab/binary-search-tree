#include <iostream>
using namespace std;
int main(){
    int i,j,n=1;
    char T[7]= {'L','M','M','J','V','S','D'};
    
    for(i=0;i<7;i++){
       
        
       
        for(j=0;j<7;j++){
             if(i==0){
         cout<<"\t"<<T[j];
          }
          if(i>0&&n<32){
            cout<<"\t"<<n++;
           
          }

        }
       
        cout<<endl;
    }
    return 0;

 }