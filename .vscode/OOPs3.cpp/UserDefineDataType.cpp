#include<iostream>
using namespace std;
class student{
    public:
    int Rno;
    float cgpa;
    string name;
};
void print(student s){
cout<<s.cgpa<<" "<<s.name<<" "<<s.Rno<<endl;
}
int main(){
student s1; //dECLERATION
s1.Rno = 24;
s1.cgpa=7.8;
s1.name="rishi";  //or cin>>name;
// cout<<s1.cgpa<<" "<<s1.name<<" "<<s1.Rno<<endl;
print(s1);
student s2={14,8.08,"RK"};
//or
// s2.cgpa=8.08;
// s2.name="Rk";
// s2.Rno=14;
// cout<<s2.cgpa<<" "<<s2.name<<" "<<s2.Rno<<endl;
print(s2);

}