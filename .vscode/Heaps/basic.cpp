#include<iostream>
#include<queue>
using namespace std;
int main(){
    //to print max number 
    // priority_queue<int> pq; // to max number
    // pq.push(19);
    // pq.push(90);
    // pq.push(87);
    // pq.push(9);
    // pq.push(99);
    // pq.push(8);
    // cout<<pq.top()<<endl;
    // pq.pop();
    // cout<<pq.top();
    // pq.pop();

    //to print min
     priority_queue< int,vector<int>,greater<int> > pq;
    pq.push(19);
    pq.push(90);
    pq.push(87);
    pq.push(9);
    pq.push(99);
    pq.push(8);
    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top();
    pq.pop();
}
 