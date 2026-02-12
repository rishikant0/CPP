#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,1,2,3,4};
    int n=7;
    int res=0;
    for(int i=0;i<n;i++){
        res=res^arr[i];

    }
    cout<<res<<"\n";
    return 0;
}