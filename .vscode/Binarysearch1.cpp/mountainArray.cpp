#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,4,3,2,0};
     int n= sizeof(arr)/sizeof(arr[0]);
        int lo=0;
        int hi=n-1;
        while(lo<=hi){
            int mid=(lo+hi)/2;
            if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1]){
                cout<<mid;
                break;
            } else if(arr[mid]>arr[mid+1]){
                
                hi=mid-1;
            }else lo=mid+1;
        
        }
       
    }
