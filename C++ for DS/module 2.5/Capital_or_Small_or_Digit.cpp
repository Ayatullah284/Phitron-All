#include<bits/stdc++.h>
using namespace std;
int main(){


    char x;
    cin>>x;
    // cout<<x;
    if (x=='a'|| x=='b' || x=='c'|| x=='d' || x=='e' || x=='f' || x=='g'|| x=='h' || x=='i'|| x=='j' || x=='k' || x=='l' || x=='m'|| x=='n' || x=='o'|| x=='p' || x=='q' || x=='r' || x=='s'|| x=='t' || x=='u'|| x=='v' || x=='w' || x=='x' || x=='y' || x=='z')
    {
        cout<<"ALPHA"<<endl<<"IS SMALL";
    }else if (x=='A'|| x=='B' || x=='C'|| x=='D' || x=='E' || x=='F' || x=='G'|| x=='H' || x=='I'|| x=='J' || x=='K' || x=='L' || x=='M'|| x=='N' || x=='O'|| x=='P' || x=='Q' || x=='R' || x=='S'|| x=='T' || x=='U'|| x=='V' || x=='W' || x=='X' || x=='Y' || x=='Z')
    {
        cout<<"ALPHA"<<endl<<"IS CAPITAL";
    }else{
        cout<<"IS DIGIT"<<endl;
    }
    
    

    
    
    
    return 0;
}