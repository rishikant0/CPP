#include<iostream>
#include<stack>
using namespace std;
int main(){
    int arr[]={1,2,7,3,9,2,7};
    int n=7;
    int nge[n];
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
   stack<int> st;
   nge[n-1]= -1;
   st.push(arr[n-1]);

   for(int i=n-2;i>=0;i--){
       while(st.size()>0 && st.top()<=arr[i]) {
        st.pop();
       }
   }
   if(st.size()==0) nge[i]=-1;
  
   
   else{
       nge[i]=st.top();
       st.push(arr[i]);  
   }
   for(int i=0;i<n;i++){
    cout<<nge[i]<<" ";
   }
   cout<<endl;
}
