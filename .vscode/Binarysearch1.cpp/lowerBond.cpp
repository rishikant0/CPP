//yadi hmko jo be target hai uska ak back wala print karan hai to 
#include<iostream>
using namespace std;
int main(){
    int arr[6]={12,22,33,44,54,61};
    int hi=6;
    int target=54;
    for(int i=0;i<hi;i++){
        if(arr[i]>=target) {
            cout<<arr[i-1];
        break;
        }
    }                           
}