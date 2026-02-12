#include<iostream>
 using namespace std;
int main(){
    int marks[6] = {90,30,32,85,34,97};
    for(int i=0;i<=5;i++ ){
if(marks[i]<=35){
    cout<<"Roll number is : "<<i<<endl;
} else{
cout<<"Marks : "<<marks[i]<<endl;
}
    }
}