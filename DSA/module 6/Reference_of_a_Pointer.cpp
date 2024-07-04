#include<bits/stdc++.h>
using namespace std;
void Fun(int* &p){

    cout<<&p<<endl;
}
int main(){


    int val=10;
    int* ptr=&val;
    Fun(ptr);

    cout<<&ptr<<endl;
    return 0;
}