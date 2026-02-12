#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter First number : ";
    cin>>a;
    int n;
    cout<<"Enter second number : ";
    cin>>n;
    int c;
    cout<<"Enter third number : ";
    cin>>c;
    if(a>n && a>c){
        cout<<"First number is greatest number";
    }
    if(n>a && n>c){
        cout<<"second number is greatest number";
    }
    if(c>n && c>a){
        cout<<"third number is greatest number";
    }
}