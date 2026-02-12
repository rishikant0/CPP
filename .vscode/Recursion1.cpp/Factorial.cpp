#include<iostream>
using namespace std;
void fun(int n){
    int f =1;
   for(int i=1;i<=n;i++){
      f*=i;
     cout<<f<<endl;
    
   }
     
}
int main(){
    int n;
    cin>>n;
    fun(n);
}