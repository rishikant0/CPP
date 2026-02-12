#include<iostream>
using namespace std;
int main(){
    cout<<"Enter Marks: ";
    int n;
    cin>>n;
    if(n>=91 && n<=100){
        cout<<"Excellent";
    }
    if(n>=81 && n<=90){
        cout<<"Very good";
    }
    if(n>=71 && n<=80){
        cout<<"Good";
    }
    if(n>=61 && n<=70){
        cout<<"Can do better";
    }
    if(n>=51 && n<=60){
        cout<<"Excellent";
    }if(n>=41 && n<= 50){
        cout<<"Below Average";
    }
    if(n>=31 && n<=40){
        cout<<"Fail";
    }

}