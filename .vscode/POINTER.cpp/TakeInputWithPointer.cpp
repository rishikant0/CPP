#include<iostream> 
using namespace std;
int main(){
    int x;
    int y;
    int* p1=&x;
    cout<<"Enter the first number : ";
    cin>>*p1;
    int* p2=&y;
    cout<<"Enter the second number : ";
    cin>>*p2;
    cout<<*p1 + *p2;
}