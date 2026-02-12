#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the character: ";
    char ch;
    cin>>ch;
    int ascii =int(ch);
    if(ascii>=65 && ascii<=90 || ascii>=97 && ascii<=122){
    if(ch=='a'|| ch=='e' || ch=='i'||ch=='o'  || ch=='u'){
        cout<<"The character is a vowal";
    }
    else{
        cout<<"The character is a consonent";
    }
    }
    else {
        cout<<"The character is not an alphabet";
    }
    }