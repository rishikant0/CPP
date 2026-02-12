#include<iostream> 
using namespace std;
int main(){
    int cp;
    cout<<"Enter the cost prise: ";
    cin>>cp;
    int sp;
    cout<<"Enter the selling prise: ";
    cin>>sp;
    int p = sp-cp;
    int L = cp - sp;
    if(sp>cp){
        cout<<p;
        cout<<" profit = ";
    }
    if(sp==cp){
        cout<<"NO profit And Loss";
    }
        else{
        cout<<L;
        cout<<" Loss = ";
    }
    
    }