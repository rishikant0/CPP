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
class B : public A{
 public:
 int b_ka_public;
 void sc(){
    a_ka_proctected;
    
 }

};
int main(){
B b;

 b.a_ka_public=17;
 cout<<b.a_ka_public<<endl;
}