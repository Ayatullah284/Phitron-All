#include<bits/stdc++.h>
using namespace std;
void Print(stringstream& ss){
    string word;
    if (ss>>word)
    {
        Print(ss);
        cout<<word<<endl;
    }
    
}
int main(){


    string a="My name is Ayatullah";
    stringstream ss(a);
    Print(ss);



    return 0;
}