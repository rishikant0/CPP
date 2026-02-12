#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
int main(){
    int arr[6]={12,32,2,41,3,0};
   int n=7;
   for(int ele:arr){
    cout<<ele<<" ";
    }
    cout<<endl;
    //selection sort
    for(int i=0;i<n-1;i++){
        int min=INT_MAX;
        int mindx=-1;
        for(int j=i;j<n-1;j++){
            if(arr[j]<min){
              min=arr[j];
              mindx=j;
            }
            swap(arr[i],arr[mindx]);
        }
        
    }
    for(int ele : arr){
            cout<<ele<<" ";
        }
    }