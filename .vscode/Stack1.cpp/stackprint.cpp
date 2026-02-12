#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> st;
st.push(10);
st.push(20);
st.push(30);
st.push(40);
st.push(50);
stack<int>temp;
while(st.size()>0){
 cout<<st.top()<<" ";  //top to bottam
 temp.push(st.top());
 st.pop();
}
while(temp.size()>0){
    cout<<temp.top()<<" ";
        //st.push(temp.top());   // bottam to top
      temp.pop();
}
cout<<endl<<st.top();
}