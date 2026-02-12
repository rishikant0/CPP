#include<iostream>
using namespace std;
void num(int i,int n){
    //base case
    if(i>n) return ;
    //recursion case
       cout<<i<<endl;
       num(i+1,n);
}
int main(){
   int n;
   cin>>n;
   num(1,n);
    
}