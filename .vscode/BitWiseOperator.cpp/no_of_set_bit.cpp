#include<iostream>
using namespace std;
int count_set_bit(int n){
    return __builtin_popcount(n);  //this is pre build function on c++ to count the binary number 1 
}
int count_set_bit2(int n){
    int count=0;
    while(n>0){
        count++;
        n = (n&(n-1));
    }
    return count;
}
int main(){
cout<<count_set_bit(45)<<"\n";
cout<<count_set_bit2(25);
}