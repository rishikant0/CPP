#include<iostream>
using namespace std;
void change(int a[]){
  a[0]={100};
}
void change2d(int arr[3][3]){
     arr[2][0]={35};
}
int main(){
    int a[3]={1,2,3};
    cout<<a[0]<<endl;;
    change(a);
    cout<<a[0]<<endl;
    int arr[3][3]={{1,2,3},{4,5,6},{8,6,9}};
    cout<<arr[0][0]<<endl;
    change2d(arr);
    cout<<arr[2][0];

}