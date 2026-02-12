#include<iostream>
using namespace std;
class Bike{
    public:
    static int nooFbike;
    int tyresize;
    int enginesize;
    //default constructor
    Bike(int tyresize , int enginesize){
        this->tyresize = tyresize;
        this->enginesize = enginesize;
        
    }
 };

 // static member in function
 void print(){
   
    static int  b =10;
    cout<<b<<endl;
    b++;
}

//static member in object
int Bike::nooFbike=19;


int main(){
    Bike tvs(12,18);//object creation // construction 
    Bike honda(67,14);
// cout<<tvs.tyresize<<" "<<tvs.enginesize<<endl;
// cout<<honda.tyresize<<" "<<honda.enginesize<<endl;

//static member
print();
print();
print();

cout<<honda.nooFbike<<endl;
cout<<tvs.nooFbike<<endl;
}