#include<iostream>
 using namespace std;
 void display(int a[]){
    for(int i=0;i<=4;i++){
        cout<<a[i]<<" ";
    }cout<<endl;
    return ;
 }
 void change(int b[]){
    b[0]={10};
 }
int main(){
    int arr[5]={2,45,36,10,65};
    display(arr);
    change(arr);
    display(arr);

}