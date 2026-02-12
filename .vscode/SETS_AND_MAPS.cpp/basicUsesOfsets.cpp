#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    unordered_set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.erase(3);
    cout<<s.size()<<endl;
    int target = 4;
    //s.find()-> it search in the set, and if 
    //it is not found then it return the last element
    if(s.find(target)!=s.end()){
        cout<<"target"<<endl;
    }else{
        cout<<"Not find target"<<endl;
    }


    //for each loop
    for(int ele : s){
        cout<<ele<<" ";
    }
}
