#include<iostream>
using namespace std;
int main(){
    int x ,y;
    char  op;
    cout<<"Enter the problem :  ";
    cin>>x;
    cin>>op;
    cin>>y;
    switch(op){
case '+':
cout<<x+y;
break;
case '-':
cout<<x-y;
break;
case '*':
cout<<x*y;
break;
case '/':
cout<<x/y;
break;
case '%':
cout<<x%y;
break;

}}