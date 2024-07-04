#include<bits/stdc++.h>
using namespace std;
class Student
{

public:
    int cls;
    int roll;
    double gpa;
    // Student(int c,int r,int g){
    //     cls=c;
    //     roll=r;
    //     gpa=g;
    // }

    // Student(int cls,int roll,int gpa){
    //     (*this).cls=cls;
    //     (*this).roll=roll;
    //     (*this).gpa=gpa;
    // }
    
    Student(int cls,int roll,double gpa){
        this->cls=cls;
        this->roll=roll;
        this->gpa=gpa;
    }

};
int main(){


    Student Ayatullah(10,72,5.02);
    Student Sakil(9,2,4.72);
    cout<<Ayatullah.cls<<" "<<Ayatullah.roll<<" "<<Ayatullah.gpa<<endl;
    cout<<Sakil.cls<<" "<<Sakil.roll<<" "<<Sakil.gpa<<endl;


    return 0;
}