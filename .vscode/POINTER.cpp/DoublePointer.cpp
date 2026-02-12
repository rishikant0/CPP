 #include<iostream>
 using namespace std;
int main(){
     int x =5;
      int*p = &x;
      int**ptr =&p;
     int***q = &ptr;
     cout<<x<<endl;//5
     cout<<*p<<endl;  //5
      cout<<**ptr<<endl; //5
      cout<<&x<<endl;//0x61ff08
      cout<<p<<endl;  //0x61ff08
     cout<<ptr<<endl; //0x61ff04



}
