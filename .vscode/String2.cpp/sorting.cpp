#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    //cin>>s;
    getline(cin,s);
    sort(s.begin(),s.end());  //it is arrange in accending order
    cout<<s; 
    //Ascii is ka order me sort hota hai 
}