#include<iostream>                                        // NOT RUN CODE 
using namespace std;
int main(){
      int nums[]={1,2,3,4};
        int n =sizeof(nums)/sizeof(nums[0]);
        
        
        int p=nums[0];
         nums[0]=1;
         for(int i=1;i<n;i++){
            nums[i]=p;
            p*=nums[i];
         }
         //suffix
       p=nums[n-1];
       for(int i=n-2;i>=0;i--){
        nums[i]*=p;
        p*=nums[i];
        
       }
       
    }
