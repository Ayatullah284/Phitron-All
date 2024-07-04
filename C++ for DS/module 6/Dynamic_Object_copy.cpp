#include<bits/stdc++.h>
using namespace std;
class Person{
    public:
        string name;
        int age;
            Person(string name,int age){
                this->name=name;
                this->age=age;
            }
};
int main(){


    Person* Ayatullah = new Person("Ayatullah Khan",27);
    Person* Obaidullah = new Person("Obaidullah Khan",30);

    *Ayatullah = *Obaidullah;
    delete Obaidullah;
    cout<<Ayatullah->name<<" "<<Ayatullah->age<<endl;


    return 0;
}