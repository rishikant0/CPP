#include<iostream>                                       //NOT RUN CORRECT FIRT NO IS MISSING 
using namespace std;
int main(){
    int arr[6]={1,2,3,4,5,6};
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
   for(int i=1;i<6;i++){
            arr[i]+=arr[i-1];
            cout<<arr[i]<<" ";
}
}