#include<iostream>
#include<vector>
using namespace std;
class Cricketer{
    public:
    char name;
    int age;
    int noOfTest;

};
int main(){

vector<Cricketer> criketers;
for(int i=0;i<2;i++){
    Cricketer *cricketer = new Cricketer;
    cricketer->name =  ;
   cricketer.add(*cricketer);
}
Cricketer cricketer[2]={virat,dhoni};
for(int i=0;i<2;i++){
    cout<<cricketer[i].name<<endl;
    cout<<cricketer[i].age<<endl;
    cout<<cricketer[i].noOfTest<<endl;
}
}