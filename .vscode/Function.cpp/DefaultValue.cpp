#include<iostream>
using namespace std;
void fun(int x=2,int y=5){   //2 is the default of x , /5 is the default of y 
cout<<x<<" "<<y;
}
int main(){
    fun();
}