#include<bits/stdc++.h>
using namespace std;
int main(){


    map<string,int>mp;

    mp.insert({"Sakib Al-Hasan",75});
    mp.insert({"Tamim Iqbal",15});
    mp.insert({"Ayatullah",50});
    mp.insert({"Samim Patoari",35});

    // for (auto it=mp.begin(); it!=mp.end(); it++)
    // {
    //     cout<<it->first<<" "<<it->second<<endl;
    // }

    // cout<<mp["Ayatullah"]<<endl;

    mp["Habibur"]=100;
    mp["Badsa"]=555;
    mp["Faruk"]=111;

    // if(mp.count("Badsa")) cout<<"Ase"<<endl;
    // else cout<<"Nai"<<endl;

    for (auto it=mp.begin(); it!=mp.end(); it++)
        {
            cout<<it->first<<" "<<it->second<<endl;
        }    


    return 0;
}