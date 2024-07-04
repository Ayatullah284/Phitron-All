#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
        string name;
        int cls;
        char section;
        int id;
        int math_m;
        int eng_m;

};
int main(){


    int n;
    cin>>n;

    Student a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i].name>>a[i].cls>>a[i].section>>a[i].id>>a[i].math_m>>a[i].eng_m;
    }

   
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (a[i].math_m+a[i].eng_m < a[j].math_m+a[j].eng_m)
            {
                swap(a[i],a[j]);
            }else if (a[i].math_m+a[i].eng_m == a[j].math_m+a[j].eng_m)
            {
                if (a[i].id>a[j].id)
                {
                    swap(a[i],a[j]);
                }
                
            }
            
            
        }
        
        
    }
    

    for (int i = 0; i < n; i++)
    {
        cout<<a[i].name<<" "<<a[i].cls<<" "<<a[i].section<<" "<<a[i].id<<" "<<a[i].math_m<<" "<<a[i].eng_m<<endl;
    }
    


    return 0;
}