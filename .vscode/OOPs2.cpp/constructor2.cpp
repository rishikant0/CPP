#include<iostream>
using namespace std ;
class A{
    private:
    int a_ka_private;  //can't access from outside ,can't be inherited
    protected:
    int a_ka_proctected; //can't access from outside ,can be inherited
    public:
    int a_ka_public;  //can be  access from outside ,can be inherited
     A(){
        cout<< "A ka Constructor call hai!"<<endl;
    }
};
class B : public A{
 public:
 int b_ka_public;
 B (){
        cout<< " B ka Constructor call hai!"<<endl;
    }
 

};
int main(){
A a; // A ka constructor call ho ga only
B b; //A and B ka constructor call ho ga only
 
 

}