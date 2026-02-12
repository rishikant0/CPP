#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    bool  flag =true;
    if(b<0){
        flag = false;
        b=-b;
    }
    float sum=1;
    for(int i=1;i<=b;i++){
        sum=sum*a;
    }
    if(flag==false){
        sum=1/sum;
        b=-b;
    }
    if(a==0&&b==0)cout<<"Not define";
    else cout<<a<<" Rised to the power "<<b<<" is "<<sum;
}