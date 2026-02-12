#include<iostream>
#include<string>
using namespace std;
int main(){
    string arr[]={"00025","2324","785","012012","02105"};
    int max=stoi(arr[0]);
    string maxs=arr[0];

    for(int i=0;i<5;i++){
        int x=stoi(arr[i]);
        if(x>max){
            max=x;
            maxs=arr[i];
        }
    }
    cout<<maxs<<endl;
    cout<<max;

}