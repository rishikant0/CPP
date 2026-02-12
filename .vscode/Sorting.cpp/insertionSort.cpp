#include<iostream>
using namespace std;
int main(){
    int arr[6]={12,32,2,41,3,0};
   int n=6;
   for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
    }
    cout<<endl;
    //insertion sort
   for(int i=1;i<n;i++){
    int j=1;
    while(j>=1){
        if(arr[j]>=arr[j-1]) break;
        else{
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
    for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
    }
   }
}