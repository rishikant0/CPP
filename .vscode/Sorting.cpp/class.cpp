#include<iostream>
using namespace std;
class student{
    private:
        string name;
        int cls,roll;
        float marks;
    public:
        void setStudent(string n,int c,int r,float m){
            name=n;
            cls=c;
            roll=r;
            marks=m;
        }
        void getStudent(){
            cout<<"Name: "<<name<<endl;
            cout<<"Class: "<<cls<<endl;
            cout<<"Roll: "<<roll<<endl;
            cout<<"Marks: "<<marks<<endl;
        }

        void grade(){
            if(marks>=90){
                cout<<"Grade: A"<<endl;
            }
            else if(marks>=80){
                cout<<"Grade: B"<<endl;
            }
            else if(marks>=70){
                cout<<"Grade: C"<<endl;
            }
            else if(marks>=60){
                cout<<"Grade: D"<<endl;
            }
            else if(marks>=50){
                cout<<"Grade: E"<<endl;
            }
            else{
                cout<<"Grade: F"<<endl;
            }
        }
};

int main(){
    student s1;
    s1.setStudent("Rahul",12,1,95);
    s1.getStudent();
    s1.grade();
    return 0;
    
}