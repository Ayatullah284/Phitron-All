#include<bits/stdc++.h>
using namespace std;
int main(){

    string s;
    // cin.getline(s,100); // C er jonno
    getline(cin,s);
    // cout<<s<<endl;

    stringstream ss(s); 
    // stringstream ss;
    // ss<<s;

    string word;
    int count=0;
    while (ss>>word)
    {
        cout<<word<<endl;
        count++;
    }
    cout<<"word-"<<count<<endl;
    
    
    


    return 0;
}