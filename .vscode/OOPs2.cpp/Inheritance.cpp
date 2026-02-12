#include<iostream>
using namespace std;
class vechical{ //base
public:
int tyresize;
int enginesize;
int light;
string companyName;
};
class car : public vechical{
    public: 
    int steeringSize;
};
class Bike : public vechical{
    public:
    int handlesize;
};
int main(){
    Bike honda;
    honda.handlesize = 5 ;
    honda.tyresize = 50 ;
    honda.enginesize = 500;
    honda.light=14;
    cout<<honda.enginesize<<endl;
    cout<<honda.tyresize<<endl;
}