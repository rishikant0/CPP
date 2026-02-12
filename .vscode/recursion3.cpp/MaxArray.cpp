#include<iostream>
using namespace std;
void display(int arr[],int n,int idx,int max)
{
    if(idx==n){
        cout<<max;
        return;
    }
    if(max<arr[idx]) max=arr[idx];
    display(arr,n,idx+1,max);
        
    
}
int main(){
    int arr[]={12,32,54,65,75};
    int n=sizeof(arr)/sizeof(arr[0]);
    int max=0;
    display(arr,n,0,max);

}