#include<iostream>
using namespace std;
void num(int n){
    //base case
    if(n==0 ) return ;
    //recursion case
       num(n-1);
       cout<<n<<endl;
       
}
int main(){
   int n;
   cin>>n;
   num(n);
    
}