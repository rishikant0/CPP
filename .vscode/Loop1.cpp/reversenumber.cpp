#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int lastdigit = 0;
    int rev=0;
    while(n>0){
        rev*=10;
        lastdigit=n%10;
        rev+=lastdigit;
        
        }   
        cout<<rev<<endl;
}