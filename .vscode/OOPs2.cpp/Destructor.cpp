#include<iostream>
using namespace std;
class Bike{
    public:
    int tyresize;
    int enginesize;
    //default constructor
    Bike(int tyresize , int enginesize){
        this->tyresize = tyresize;
        this->enginesize = enginesize;
        
    }
    ~Bike(){
        cout<<"Destructor"<<endl;
    }

 };
int main(){
    Bike tvs(12,18);//object creation // construction 
    Bike honda(67,14);
cout<<tvs.tyresize<<" "<<tvs.enginesize<<endl;
cout<<honda.tyresize<<" "<<honda.enginesize<<endl;
}