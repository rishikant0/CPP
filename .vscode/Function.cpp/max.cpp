#include<iostream>
using namespace std;
int max(int x, int y){
    int a;
if(x<y) a = x;
else a=y;
return a;
}
int main(){
    cout<<max(3,4);
}