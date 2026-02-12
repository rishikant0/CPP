#include<iostream>
using namespace std;
int main(){
    // string s="abcdef";
    // //substr(idx,length)
    // //cout<<s.substr(2)<<endl;
    // cout<<s.substr(2,3);

string str;
cout<<"Enter the string : ";
cin>>str;
int n=str.length();
cout<<str.substr(n/2);
}