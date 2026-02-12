#include<iostream>
using namespace std ;
class A{
    private:
    int a_ka_private;  //can't access from outside ,can't be inherited
    protected:
    int a_ka_proctected; //can't access from outside ,can be inherited
    public:
    int a_ka_public;  //can be  access from outside ,can be inherited
    
};
class B : protected A{
 public:
 int b_ka_public;
 void show(){
    a_ka_proctected=5;
 }
 
};
class C : public  B{
 public:
 int c_ka_public;
 void show(){
    a_ka_public=5;
 }
};
int main(){
C c;
c.b_ka_public;

 
}