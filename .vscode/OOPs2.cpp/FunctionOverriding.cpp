#include<iostream>
using namespace std ;
class A{
    private:
    int a_ka_private;  
    int a_ka_proctected; 
    public:
    int a_ka_public;  
    void show(){
        cout<<"A print ho rha hai"<<endl;
    }
};
class B :public A {
    private:
    int b_ka_private;  
    protected:
    int b_ka_proctected; 
 public:
 int b_ka_public;
 void show(){
    cout<<"B print ho ga"<<endl; //"A ka place par B print ho ga usko Function Overriding bola jata hai 
 }

};

int main(){
B b;
b.show();
b.A::show();

}