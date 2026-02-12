#include<iostream>
#include<vector>
 using namespace std;
 int main(){
    vector<int> v;
    v.push_back(6);
    cout<<v.size()<<endl;  // v.size() show size of array
    cout<<v.capacity()<<endl;  //capacity of array 
    v.push_back(5);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    v.push_back(9);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    v.push_back(10);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
 }