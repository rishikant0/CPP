#include<iostream>
using namespace std;
void sum1ToN(int sum,int n){
    if(n==0 ) {
        cout<<sum;
        return;
    }
    sum1ToN(sum+n,n-1);
       
}
int sum2(int n){
    if(n==0) return 0;
    return n+sum2(n-1);
}
int main(){
  // sum1ToN(0,6);
  sum2(20);
}