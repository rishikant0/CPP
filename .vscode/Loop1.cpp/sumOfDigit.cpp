#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int sum = 0;
    int D;
    while(n>0){
        D=n%10;
        sum=sum+D;
        n/=10;
        }     cout<<sum<<endl;
}