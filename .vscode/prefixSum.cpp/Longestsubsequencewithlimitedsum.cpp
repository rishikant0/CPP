#include<iostream>                                            // RUN CODE 
using namespace std;
int main() {
    int nums[]={4,5,2,1};
    int queries[]={3,10,21};
        int n =sizeof(nums)/sizeof(nums[0]);
        int m =sizeof(queries)/sizeof(queries[0]);
        //int ans[3];
        
        //make numsfor(int i=0;i<n-1;i++){
       for(int i=0;i<n-1;i++){
       for(int j=0;j<n-1-i;j++){
        if(nums[j]>nums[j+1]){
        swap(nums[j],nums[j+1]);
    }
    }
    }
         
        for(int i=1;i<n;i++){
            nums[i]+=nums[i-1];
        }
        for(int i=0;i<m;i++){
            int len=0;
            for(int j=0;j<n;j++){
                if(nums[j]>queries[i]) break;
                len++;
            }
           // ans[i]=len;
           cout<<len<<" ";
        }
         
    }
    

