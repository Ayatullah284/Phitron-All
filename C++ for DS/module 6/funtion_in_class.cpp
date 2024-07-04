#include<bits/stdc++.h>
using namespace std;
class Person{
    public:
        string name;
        int age;
        int num1;
        int num2;
            Person(string name, int age, int num1, int num2){
                this->name=name;
                this->age=age;
                this->num1=num1;
                this->num2=num2;
            }
            void print(){
                cout<<name<<" "<<age<<" "<<num1<<" "<<num2<<endl;
            }
            int sum(){
                return num1+num2;
            }
};
int main(){


    Person Ayatullah("Ayatullah Khan",27,100,50);
    // cout<<Ayatullah.name<<endl;
    // Ayatullah.print();
    cout<<Ayatullah.sum()<<endl;


    return 0;
}