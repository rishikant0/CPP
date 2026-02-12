#include<iostream>
using namespace std;
void num(int n){
    //base case
    if(n==0 ) return ;
    //recursion case
       cout<<n<<endl;
       num(n-1);
}
int main(){
   int n;
   cin>>n;
   num(n);
    
}