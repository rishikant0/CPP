#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
unordered_map<string,int> m;
pair<string,int> p1;
p1.first ="aman";
p1.second= 23;
pair<string,int> p2;
p2.first = "ram";
p2.second = 23;
pair<string,int> p3;
p3.first = "rohan";
p3.second = 34;
m.insert(p1);
m.insert(p2);
m.insert(p3);
for(auto p: m){
cout<<p.first<<" "<<p.second<<" ";
}

}