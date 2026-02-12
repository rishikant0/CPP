#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    int count=0;
    string s="physicsWallah";
    string t="Wallahphysics";
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    cout<<s<<endl;
    cout<<t<<endl;
    if(s==t){
        cout<<true;
    }
    else{
        cout<<false;
    }
    
}