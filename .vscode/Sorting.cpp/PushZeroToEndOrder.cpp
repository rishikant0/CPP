#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={23,0,8,6,05,7,0,0,7,0};
    int n=10;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    //bubblesort
    for(int i=0;i<n-1;i++){
       for(int j=0;j<n-1-i;j++){
        if(arr[j]==0){
        swap(arr[j],arr[j+1]);
    }
    }
    }
cout<<endl;
for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    }