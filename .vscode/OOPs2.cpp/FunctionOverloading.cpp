#include<iostream>
using namespace std;
class Bike{
   public:
    int tyresize;
    int enginesize;
    //construction  overloading 
   Bike(int ts , int es):tyresize(ts),enginesize(es){}
    Bike(int ts) : tyresize(ts),enginesize(100){}
    Bike():tyresize(12),enginesize(100){} 
 };
 void calculatorArea(int l,int b){
    cout<<l*b<<endl;
 }
  void calculatorArea(int s){
    cout<<s*s<<endl;
 }
  void calculatorArea(float  r){
    cout<<3.14*r*r<<endl;
 }
int main(){ 
     Bike tvs(12,18);//object creation // construction 
    Bike honda(67,14);
calculatorArea(3,4);
calculatorArea(4);
calculatorArea(9);
}