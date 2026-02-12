#include<iostream>
#include<set>
#include<map>
using namespace std;
int main(){
    // set<int> s;
    // s.insert(12);
    // s.insert(43);
    // s.insert(11);
    // s.insert(3);
    // for(int ele  : s){
    //     cout<<ele<<" ";
    // }
         //MAPS
//     map<int,int> m;
//    m[10] = 10;
//    m[42] = 20;
//    m[5]= 43;
//    m[1]= 34;
//     for(auto e  : m){
//         cout<<e.first<<" "<<e.second<<" ";
//     }

     map<string,int> m;
   m["rohan"] = 10;
   m["aman"] = 20;
   m["ram"]= 43;
   m["sohan"]= 34;
    for(auto e  : m){
        cout<<e.first<<" "<<e.second<<" ";
    }
}
