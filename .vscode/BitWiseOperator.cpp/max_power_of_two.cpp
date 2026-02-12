// find nearest  power of given nummber
#include<iostream>
using namespace std;
int max_pow(int n){
    n= n|(n>>1);
    n= n|(n>>2);
    n= n|(n>>3);
    n= n|(n>>4);
    n= n|(n>>8);
     n= n|(n>>16);
     return (n+1)>>1;
}
int main(){
    int  num = 19;
    int temp ;
    while(num!=0){
    temp = num;
     num = num&(num-1);
    }
    cout<<temp<<"\n";
    // another process to sove the code
    int y =23;
    cout<<max_pow(y);
}