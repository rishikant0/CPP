#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number :";
    cin>>n;
    if(n%5==0  || n%3==0){
        cout<<"Divisible by 3 or 5";
    }
    else{
        cout<<"not Divisible by 3 or 5";
    }
}