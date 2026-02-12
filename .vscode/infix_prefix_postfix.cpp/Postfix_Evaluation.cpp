#include<iostream>
#include<stack>
using namespace std;
int solve(int val1, int val2, int ch){
    if(ch=='+') return val1+val2;
    else if(ch=='-') return val1-val2;
   else  if(ch=='*') return val1*val2;
    else return val1/val2;
}
int main(){
string s = "7+9*4/8-3"; //postfix expression
//we need two stack 1 foe val ,2 for op 
stack<int> val;
for(int i=0;i<s.length();i++){
    //check if s[i] is a digit (0-9)
    if(s[i]>=48 && s[i]<=57){ //digit
        val.push(s[i]-48);
    }
    else{
        int val2 = val.top();
        val.pop();
         int val1 = val.top();
        val.pop();
        int ans = solve(val1,val2,s[i]);
        val.push(ans);
        }
        
}

cout<<val.top()<<endl;

}