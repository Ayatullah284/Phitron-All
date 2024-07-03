#include<bits/stdc++.h>
using namespace std;
int main(){



    char s[100001];
    int length = strlen(s);
    while (cin.getline(s,100001))
    {
        sort(s,s+length);
    }
    for (int i = 0; i < length; i++)
    {
        if (s[i]!=' ')
        {
            cout<<s[i];
        }
        
    }
    
    



    return 0;
}