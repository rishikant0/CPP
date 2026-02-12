#include<iostream>                                                     //code run
using namespace std;
 int main(){
    int arr[]={1,2,5,4,1,8,9,5,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k=4;
    int maxsum=0;
    int sum=0;
    int maxIDX=0;
    for(int i=0;i<k;i++){
        sum+=arr[i];
    }
   maxsum=sum;
   //Sliding window
   int i=1;
   int j=k;
   while(j<n){
    sum=sum+arr[j]-arr[i-1];
    if(maxsum<sum){
      maxsum=sum;
       maxIDX=i;
    }
    i++;
    j++;
   }
   cout<<maxsum<<endl;
   cout<<maxIDX;
 }