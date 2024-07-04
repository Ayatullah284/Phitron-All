#include<bits/stdc++.h>
using namespace std;
class Man{

    public:
        int age;
        int sealary;
        double hight;
            Man(int age,int sealary,double hight){
                this->age=age;
                this->sealary=sealary;
                this->hight=hight;
            }
};

int main(){


    Man* Ayatullah = new Man(27,10000,5.3);
    Man* Amzad = new Man(30,100000,5.4);


    cout<<Ayatullah->age<<" "<<Ayatullah->sealary<<" "<<Ayatullah->hight<<endl;
    cout<<Amzad->age<<" "<<Amzad->sealary<<" "<<Amzad->hight<<endl;
    
    delete Ayatullah;
    delete Amzad;

    // cout<<Ayatullah->age<<" "<<Ayatullah->sealary<<" "<<Ayatullah->hight<<endl;
    // cout<<Amzad->age<<" "<<Amzad->sealary<<" "<<Amzad->hight<<endl;

    return 0;
}