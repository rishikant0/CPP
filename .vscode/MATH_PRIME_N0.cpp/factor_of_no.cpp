#include<iostream>
#include<cmath>
using namespace std;
int printfac(int num){
for(int i=1;i<sqrt(num);i++){
 if(num%i==0){
    cout<<i<<" ";
 }
}
for(int i=sqrt(num);i>=1;i--){
 if(num%i==0){
    cout<<num/i<<" ";
 }
}
}
int main(){
printfac(20);
}