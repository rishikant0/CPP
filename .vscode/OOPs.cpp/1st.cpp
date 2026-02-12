#include<iostream>
using namespace std;
class book{
    public:
    char name;
    int price;
    int NOOFPAGES;

    int countBooks(int p){
        if(price<p){
            return 1;
        } return 0;
    }
    bool isbookpresent(int p){
        if(NOOFPAGES==p){
            return true;
        }return false;
    }
};
int main(){
book herry;
herry.name='r';
herry.price=1000;
herry.NOOFPAGES=500;
cout<<herry.countBooks(5000)<<endl;
cout<<herry.isbookpresent(5000);
}