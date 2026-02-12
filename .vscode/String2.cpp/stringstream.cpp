#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<sstream>
using namespace std;
int main(){
    string str="we are learning programming and you are learning dsa";
    stringstream ss(str);
    string temp;
    while(ss>>temp){
        cout<<temp<<endl;
    }
}