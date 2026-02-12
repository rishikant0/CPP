#include<iostream>                                               //RUN CODE
#include<algorithm>
#include<limits>
using namespace std;
 int main(){//-1,-8,0,5,-7
//int arr[]={1,2,6,4,5};
int arr[]={-1,-8,0,5,-7};
int n= sizeof(arr)/sizeof(arr[0]);
//sorting portation 
for(int i=0;i<n-1;i++){
       for(int j=0;j<n-1-i;j++){
        if(arr[j]>arr[j+1]){
        swap(arr[j],arr[j+1]);
    }
    }
    }
        int suf[n];
        suf[n-1]=arr[n-1];
        for(int i=n-2;i>=0;i--){
          suf[i]=suf[i+1] + arr[i];
        }
       // find the pivot idx;
       int idx=-1;
       for(int i=0;i<n;i++){
        if(suf[i]>=0){
            idx=i;
            break;
        }
       }
       if(idx==-1) cout<<"0";
       //max sum of like-time coefficent 
       int x=1;
       int maxsum =0;
       for(int i=idx;i<n;i++){
        maxsum+=(arr[i]*x);
        x++;
       }
       cout<<maxsum;
    }

 