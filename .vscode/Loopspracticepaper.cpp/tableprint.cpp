#include<iostream>
using namespace std;
int main(){
     int n;
    cout<<"Enter the table of : ";
    cin>>n;
    int p=0;
    for(int i=1;i<=10;i++){
     p=n*i;
     cout<<n<<"*"<<i<<"="<<p<<endl;
    }
    }