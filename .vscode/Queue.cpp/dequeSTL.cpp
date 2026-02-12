#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque <int> dq;
     dq.push_back(20);
     dq.push_back(90);
     dq.push_back(39);
     cout<<dq.front()<<endl;
     dq.pop_front();
    cout<<dq.front()<<endl;
     cout<<dq.back();

}