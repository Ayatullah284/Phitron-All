#include <bits/stdc++.h>
using namespace std;
int main()
{

        int n;
        cin>>n;
        cin.ignore();
        while (n--)
        {
            string sentence;
            getline(cin, sentence);
            string word;
            stringstream ss(sentence);
            map<string, int> mp;
            int max=INT_MIN;
            string name;
            while (ss >> word)
            {
                mp[word]++;
                if(mp[word]>max){
                    max=mp[word];
                    name=word;
                }
            }
            cout<<name<<" "<<max<<endl;
        }
        
    
    
    return 0;
}



