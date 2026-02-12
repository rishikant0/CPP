#include<iostream>
using namespace std;
class car{
    public:
    int price ;
    string name;
    void print(){
        cout<<name<<" "<<price<<" "<<seat;
        cout<<endl;
    }
    car(){

    }
    car(int price,string name){
        this->price=price;
        this->name=name;
    }
    car(int price,string name,int seat){
        this->price=price;
        this->name=name;
        this->seat=seat;
    }
    private:
    int seat;
};
int main(){
car c1=car(120000,"kia sonet");
cout<<c1.name<<" "<<c1.price<<endl;
car c2=car(800000,"Honda",5);
c2.print();
//cout<<c2.name<<" "<<c2.price<<" "<<c2.seat<<endl;
}