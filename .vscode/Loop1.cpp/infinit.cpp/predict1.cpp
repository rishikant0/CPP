#include <iostream>
using namespace std;
int main()
{
    int i=4, j = 0,z;
    while(i>=0){
        i--;
        j++;
        if(i==j){
            continue;
        }
else{
    cout<<i<< " "<<j<<endl;
}
    }
}