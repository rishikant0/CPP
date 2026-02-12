#include<iostream>
using namespace std;
class vechical{
    public:
    int tyer;
    int engineSize;
    virtual void calculateMilge()=0;
    virtual void refuel()=0;
};
class Bike : public vechical{
    public:
    int handal ;
    void calculateMilge(){
        cout<<"Bike ka show"<<endl;
    }
    void refuel(){
        cout<<"Bike fuel"<<endl;
    }
};
int main(){
Bike b;
b.calculateMilge();
b.refuel();
}