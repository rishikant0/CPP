#include<iostream> 
using namespace std;
int main(){
    int x=5;
    int y=6;
    int *p=&x;
    int *p1=&y;
    cout<<*p + *p1;
}