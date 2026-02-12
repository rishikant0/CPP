#include<iostream>
using namespace std;
void fun(int n,int y){
cout<<"address of fun x "<<&n<<endl;
    cout<<"address of funy"<<&y<<endl;
}
int main(){
    int n=3;
    int y=4;
    cout<<"address of main x "<<&n<<endl;
    cout<<"address of main y"<<&y<<endl;
fun(n,y);
    }
