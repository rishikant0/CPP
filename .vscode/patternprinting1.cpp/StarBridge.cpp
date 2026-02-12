#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter the line : ";
cin>>n;
int m=n-1;
for(int i=1;i<=m;i++){
for(int j=1;j<=n-i;j++){
    cout<<"*";
}
int nsp=1;
for(int k=1;k<=i+2;k++){
    cout<<" ";
}nsp+=2;
for(int q=1;q<=n-i+1;q++){
    cout<<"*";
}
cout<<endl;
}
}
