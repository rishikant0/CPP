#include<iostream>
using namespace std;
int  main(){
    int m;
    cout<<"Enter the 1st row matrix : ";
    cin>>m;
     int n;
    cout<<"Enter the 1st col matrix : ";
    cin>>n;
     int p;
    cout<<"Enter the 2d row matrix : ";
    cin>>p;
     int q;
    cout<<"Enter the 1st col matrix : ";
    cin>>q;
    if(n==p){
       int a[m][n];
       cout<<"Enter the 1st matrix ";
       for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }cout<<endl;
    int b[p][q];
       cout<<"Enter the 2nd matrix ";

    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            cin>>b[i][j];
        }
    }cout<<endl;
    int res[m][q];
   for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            res[i][j] = 0;
            for(int k=0;k<p;k++){
                res[i][j] += a[i][k]*b[k][j];
            }
            }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
          cout<<res[i][j]<<" ";
    }
    cout<<endl;
    }
    }
    else{
        cout<<"Matrix cannot be multiply ";
    }
}
