#include<iostream>
#include<vector>
 using namespace std;
//  void sort1(vector<int>& v){
//     int n=v.size();
//     int i=0;
//     int j=n-1;
//     while(i<j){
//       if(v[i]<0) i++;
//       if(v[j]>0) j--;
//       if(i>j) break;
//       if(v[i]<0 && v[j]>0) {
//      int temp=v[i];
//      v[i]=v[j];
//      v[j]=temp;
//        i++;
//        j--;
//       }
//     }
//  }
void sort(vector<int>& v){
     int n=v.size();  
        int no0=0;   
      int no1=0;
    for(int i=0;i<n;i++){
      if(v[i]<0) no0++;
      else no1++;
     } 
     //filling element
     
          for(int i=0;i<n;i++){
        if(i<no0) v[i]=no0;
        else v[i]=no1;
     } 
     
  }
 int main(){
    vector<int>v;
    v.push_back(-35);
    v.push_back(-1);
    v.push_back(1);
    v.push_back(-36);
    v.push_back(-67);
    v.push_back(1);
    v.push_back(-18);
    v.push_back(2);
    v.push_back(97);
    v.push_back(-56);
    v.push_back(45);
      for(int i=0;i<v.size();i++){
      cout<<v[i]<<" ";
      }
      cout<<endl;
      
     sort(v);

 for(int i=0;i<v.size();i++){
      cout<<v[i]<<" ";
      }
      cout<<endl;
    }