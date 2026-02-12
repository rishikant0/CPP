#include<iostream>
using namespace std;
int main(){

    int arr[2][4];
     for(int i=0;i<2;i++){
         for(int j=0;j<4;j++){
             cin>>arr[i][j];
         }
     }
     //print
     for(int i=0;i<2;i++){
         for(int j=0;j<4;j++){
             cout<<arr[i][j]<<" ";
         } cout<<endl;
         } cout<<endl;
     // store the transpose
     int t[4][2];
     for(int i=0;i<4;i++){
        for(int j=0;j<2;j++){
            t[i][j] = arr[j][i];
        }
     }
     //print transpose
      for(int i=0;i<4;i++){
        for(int j=0;j<2;j++){
            cout<<t[i][j]<<" ";
        }cout<<endl;
     }

}