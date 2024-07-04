#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
        int id;
        int marks;
        char name[100];
            // Student(int id, int marks, char name[]){
            //     this->id=id;
            //     this->marks=marks;
            //     strcpy(this->name,name);

            // }

};
int main(){

     Student A;
     Student B;
     Student C;
     
     cin>>A.name;
     cin>>B.name;
     cin>>C.name;

     cout<<A.name<<" ";
     cout<<B.name<<" ";
     cout<<C.name<<" ";


    // Student* Arif = new Student(1, 50, "Arif Hasan");
    // Student* Asif = new Student(2, 500, "Asif Hasan");
    // Student* Asik = new Student(3, 5000, "Asik Hasan");

    // cout<<Arif->A<<" "<<Arif->B<<" "<<Arif->C<<endl;
    // if (Arif->marks>Asif->marks)
    // {
    //     cout<<"Arif er marks "<<Arif->marks;
    // }else{
    //     cout<<"Asif er marks "<<Asif->marks;
    // }

    // cout<<Arif->id<<" "<<Arif->marks<<" "<<Arif->name<<endl;
    // cout<<Asif->id<<" "<<Asif->marks<<" "<<Asif->name<<endl;
    // cout<<Asik->id<<" "<<Asik->marks<<" "<<Asik->name<<endl;
    
    
    
    return 0;
}