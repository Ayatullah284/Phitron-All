#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin>>s;
        string s2;
        cin>>s2;
        int length = s2.length();

        while (s.find(s2) != -1)
        {
            s.replace(s.find(s2),length,"#");
        }

        cout<<s<<endl;        
    }
    


    


    return 0;
}