#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
unordered_map<string,int> m;
pair<string,int> p1;
p1.first ="aman";
p1.second= 23;
m.insert(p1);

m["rohan"] = 14;
m["ram"] = 13;

cout<<m.size()<<endl;
for(auto p: m){
cout<<p.first<<" "<<p.second<<" "<<endl;
}
m.erase("ram");
m.erase("aman");

for(auto p: m){
cout<<p.first<<" "<<p.second<<" ";
}
cout<<m.size()<<endl;
}