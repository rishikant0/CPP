#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number is : ";
    cin>>n;
    int product=1;
    for(int i=1;i<=n;i++){
        product=product*i;
    }
    cout<<product;
}