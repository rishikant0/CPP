#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,2,2,3,3,3,4,5,6,7,8,10};
    int n=13;
    int lo=0;
    int hi=n-1;
    int target=4;
    bool flag =false;
   while(lo<=hi){
    int mid = (hi+lo)/2;
    if(arr[mid]==target){
        if(arr[mid-1]!=target){
            flag=true;
            cout<<mid;
            break;
        }
        else{
            hi=mid-1;
        }
    }
    else if(arr[mid]<target){
         lo=mid+1;}
    else {
        hi=mid-1;
    }
   }                  
   if(flag==false) cout<<arr[hi];
}