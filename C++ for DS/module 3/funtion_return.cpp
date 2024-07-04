#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
        int cls;
        int roll;
        double gpa;
        Student(int cls,int roll,double gpa){
            this->cls=cls;
            this->roll=roll;
            this->gpa=gpa;
        }

};
Student* fun(){

    // Student Ayatullah(5,52,4.54);
    Student* Ayatullah = new Student(5,52,4.54);
    // Student *p = &Ayatullah;

    // return Ayatullah;
    // return p;
    return Ayatullah;
}
int main(){


    // Student ans = fun();
    Student *ans = fun();

    // cout<<ans.cls<<" "<<ans.roll<<" "<<ans.gpa<<endl;
    cout<<ans->cls<<" "<<ans->roll<<" "<<ans->gpa<<endl;
    delete ans;
    // cout<<ans->cls<<" "<<ans->roll<<" "<<ans->gpa<<endl;

    return 0;
}