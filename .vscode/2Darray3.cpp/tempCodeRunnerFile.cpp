#include<iostream>
using namespace std;
void change(int a[]){
  a[0]={100};
}
int main(){
    int a[3]={1,2,3};
    cout<<a[0]