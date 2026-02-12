#include<iostream>
#include<queue>
using namespace std;
int main(){
    // int arr[]={6,5,4,3,8,10,9};
    // int k=3;
    int arr[]={10,9,8,7,4,70,60,50};
    int k=4;
    int n=sizeof(arr)/4;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    priority_queue<int,vector<int>,greater<int>> pq; //minheap
    // vector<int>ans;
    int idx=0;
    for(int i=0;i<n;i++){
        pq.push(arr[i]);
        if(pq.size()>k) {
            // ans.push_back(pq.top());
            arr[idx++]=pq.top();
            pq.pop();
        }
    }
    while(pq.size()>0){
        // ans.push_back(pq.top());
        arr[idx++]=pq.top();
        pq.pop();
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}