#include <iostream>
using namespace std;
int main()
{
int x,y;
cin>>x>>y;
x+=y; //x = x+y => 2+3 => 5
x-=y; //x= x-y => 5-3 =>2
x%=y; //x = x%y => 2%3 => 2
cout<<x;
}