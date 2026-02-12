#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the first number: ";
    int a;
    cin>>a;
    cout<<"Enter the second number: ";
    int b;
    cin>>b;
    cout<<"Enter the third number: ";
    int c;
    cin>>c;
    if((a+b>c) && (b+c>a) && (c+a>b)){
        cout<<"It is a triangle";
    } else{
    cout<<"It is not a triangle";
    }
}