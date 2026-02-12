#include<iostream>
using namespace std;
int main(){
int x=25;  //in binary 11001
int y= 31; //in  binary 11111
cout<<__builtin_popcount(x^y)<<"\n";
}