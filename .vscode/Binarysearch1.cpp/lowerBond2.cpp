//yadi hmko jo be target hai uska ak back wala print karan hai to 
#include<iostream>
using namespace std;
int main(){
    int arr[6]={12,22,33,44,54,61};
    int n=6;
    int lo=0;
    int hi=n-1;
    int target=44;
    bool flag =false;
   while(lo<=hi){
    int mid = (hi+lo)/2;
    if(arr[mid]==target) {
        flag = true;
      cout<<arr[mid-1];
      break;
    }
    else if(arr[mid]<target){
         lo=mid+1;}
    else {
        hi=mid-1;
    }
   }                  
   if(flag==false) cout<<arr[hi];
}