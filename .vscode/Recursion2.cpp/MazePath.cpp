#include<iostream>
using namespace std;
int maze2(int row,int col){
    if(row<1 || col<1) return 0;
    if(row==1 && col==1) return 1;
     int rightways = maze2(row,col-1); // right
     int downways = maze2(row-1,col); // down
   return rightways+downways;
}
void printpath(int sr,int sc,int er,int ec,string s){
    if(sr>er || sc>ec) return;
    if(sr==er && ec==ec) {
        cout<<s<<endl;
        return;
    }
    printpath(sr,sc+1,er,ec,s+'R'); //right
    printpath(sr+1,sc,er,ec,s+'D'); //right
    
}
int main(){
      cout<<maze2(3,5)<<endl;
      printpath(0,0,3,5,"");
}