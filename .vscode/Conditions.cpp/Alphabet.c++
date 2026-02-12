#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter the character : ";
    cin>>ch;
    int ascii =int(ch);
    if(ascii>=65 && ascii<=90 || ascii>=97 && ascii<=122){
        cout<<"This character is alphabet";

    }else{
        cout<<"This chracter is not an alphabet";
    }
}