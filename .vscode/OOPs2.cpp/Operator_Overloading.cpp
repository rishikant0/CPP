#include<iostream>
using namespace std;
class complexnumber{
    public:
    int imaginary;
    int real;
    complexnumber operator +(complexnumber &c1){
        complexnumber c3;
        c3.imaginary=c1.imaginary + this->imaginary;
        c3.real =c1.real+this->real;
        return c3;
    }
};
int main(){
complexnumber a1,a2;
a1.imaginary=10;
a2.imaginary=20;
a1.real=10;
a2.real=130;
complexnumber a3=a1+a2;
cout<<"Real : "<<a3.real<<" "<<"imaginary : "<<a3.imaginary<<endl;
}