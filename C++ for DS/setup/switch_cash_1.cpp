#include<iostream>
using namespace std;
int main(){

    // int x; 1,2
    char x;
    cin>>x;


    // 1
    // switch (x)
    // {
    // case 1:
    //     cout<<"one"<<endl;
    //     break;
    // case 2:
    //     cout<<"two"<<endl;
    //     break;
    // case 3:
    //     cout<<"three"<<endl;
    //     break;
    // case 4:
    //     cout<<"fore"<<endl;
    //     break;
    // case 5:
    //     cout<<"five"<<endl;
    //     break;
    
    // default:
    //     cout<<"This number is not 1 to 5"<<endl;
    //     break;
    // }


    // 2
    // switch (x%2)
    // {
    // case 0:
    //     cout<<"even"<<endl;
    //     break;
    // case 1:
    //     cout<<"odd"<<endl;
    //     break;
    
    // default:
    // cout<<"This number is small of 0"<<endl;
    //     break;
    // }


    // 3
    switch (x)
    {
    case 'a':
        cout<<"vowel"<<endl;
        break;
    case 'e':
        cout<<"vowel"<<endl;
        break;
    case 'i':
        cout<<"vowel"<<endl;
        break;
    case 'o':
        cout<<"vowel"<<endl;
        break;
    case 'u':
        cout<<"vowel"<<endl;
        break;
    
    default:
    cout<<"consunent"<<endl;
        break;
    }

    return 0;
}