#include<iostream>                                             //RUN CODE
using namespace std;
int main(){
    int arr[7]={1,2,3,4,5,6,7};
    for(int i=0;i<7;i++){
   cout<<arr[i]<<" ";
    }cout<<endl;
    for(int i=1;i<7;i++){
        arr[i]+=arr[i-1];
       cout<<arr[i]<<" ";
    }cout<<endl;
    
         cout<<arr[6]-arr[3]; //find  the differnet b/w arr[6]-arr[3];
    
    //OR  ANOTHET WAY
    // cout<<arr[3]<<" ";
    // cout<<arr[4]<<" ";
    // cout<<arr[5]<<" ";
   
}