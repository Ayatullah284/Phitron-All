#include<bits/stdc++.h>
using namespace std;
class Player
{
    public:
    char name[100];
    int run;
    double average;


};
int main(){

    // Player a;
    // char tmp[100]="Tamim";
    // strcpy(a.name,tmp);
    // a.run=70;
    // a.average=53.60;

    Player a,b;
    // cin>>a.name>>a.run>>a.average;
    cin.getline(a.name,100);
    cin>>a.run>>a.average;
    getchar();
    cin.getline(b.name,100);
    cin>>b.run>>b.average;


    cout<<a.name<<" "<<a.run<<" "<<a.average<<endl;
    cout<<b.name<<" "<<b.run<<" "<<b.average<<endl;

    


    return 0;
}