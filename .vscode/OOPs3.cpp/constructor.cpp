#include<iostream>
using namespace std;
class student{
    public:
    int Rno;
    float cgpa;
    string name;
};
student(int x,int y,string z){  //constructor
Rno=x;
cgpa=y;
name=z;
}
student(string z,int x,float y,){ //constructor
Rno=x;
cgpa=y;
name=z;
}
student(string z,int x){ //constructor
Rno=x;

name=z;
}
int main(){
 student s1={14,8.08,"RK"};
 student s2=student("ganga",90,9.2);
 student s3={"rishikant",6};


}