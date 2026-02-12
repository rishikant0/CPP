#include<iostream>
#include<vector>
using namespace std;
void change2dvector(vector< vector <int> > &v){
    v[1][4]={100};
}
int main(){
    vector<int> v1;
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(4);
    v1.push_back(6);
    v1.push_back(0);
    vector<int> v2;
    v2.push_back(5);
    v2.push_back(7);
    v2.push_back(8);
    v2.push_back(2);
    v2.push_back(9);
    vector<vector <int> > v;
    v.push_back(v1);
    v.push_back(v2);
    cout<<v[1][4]<<endl;
    change2dvector(v);
    cout<<v[1][4]<<endl;
        }