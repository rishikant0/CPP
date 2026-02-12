#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={24,35,1,4,2,20,5};
    int n=8;
    for(int i=0;i<n-1;i++){
        cout<<arr[i]<<" ";
    }
    //bubblesort
    for(int i=0;i<n-1;i++){
       for(int j=0;j<n-1-i;j++){
        if(arr[j]>arr[j+1]){
        swap(arr[j],arr[j+1]);
    }
    }
    }
cout<<endl;
for(int i=0;i<n-1;i++){
        cout<<arr[i]<<" ";
    }
    }