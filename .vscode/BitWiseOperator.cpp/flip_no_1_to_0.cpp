#include<iostream>
using namespace std;
int filpbits(int n){
int result = 0;
int bitCount = sizeof(n) * 8; // Number of bits in an integer

for (int i = 0; i < bitCount; i++) {
result = result | ((~(n & (1 << i))) << i);
}
return result;
}
int main(){
int num=24;
cout<<filpbits(num);
}