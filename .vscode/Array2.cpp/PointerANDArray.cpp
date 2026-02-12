#include<iostream>
 using namespace std;
 int main(){
    int arr[]={4,2,6,7,2};
    int *ptr = arr;
    for(int i=0;i<=4;i++){
        cout<<arr[i]<<" ";
    }
    ptr = arr;//ptr is pointing to 1st element
    *ptr=8;
    ptr++;
    *ptr=9;
    *ptr--;//ptr is pointing to 1st element
    cout<<endl;
    for(int i=0;i<=4;i++){
        cout<<*ptr<<" ";
        ptr++;
    }
ptr =arr;//ptr is pointing to 1st element
 }