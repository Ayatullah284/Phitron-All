#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
        int id;
        char name[100];
        char section;
        int total_marks;
            

};
int main(){
    Student A;
    Student B;
    Student C;


    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        cin>>A.id>>A.name>>A.section>>A.total_marks;
        cin>>B.id>>B.name>>B.section>>B.total_marks;
        cin>>C.id>>C.name>>C.section>>C.total_marks;

 
        
   
            if (A.total_marks> B.total_marks && A.total_marks> C.total_marks)
            {
                cout<<A.id<<" "<<A.name<<" "<<A.section<<" "<<A.total_marks<<endl;
            }else if (B.total_marks > A.total_marks && B.total_marks> C.total_marks)
            {
                cout<<B.id<<" "<<B.name<<" "<<B.section<<" "<<B.total_marks<<endl;
            }else if (C.total_marks > A.total_marks && C.total_marks> B.total_marks)
            {
                cout<<C.id<<" "<<C.name<<" "<<C.section<<" "<<C.total_marks<<endl;
            }


           else if (A.total_marks==B.total_marks && A.total_marks==C.total_marks)
            {
                if (A.id<B.id && A.id<C.id)
                {
                    cout<<A.id<<" "<<A.name<<" "<<A.section<<" "<<A.total_marks<<endl;
                }else if (B.id<A.id && B.id<C.id)
                {
                    cout<<B.id<<" "<<B.name<<" "<<B.section<<" "<<B.total_marks<<endl;
                }else{
                    cout<<C.id<<" "<<C.name<<" "<<C.section<<" "<<C.total_marks<<endl;
                }
                
                
            }else if (A.total_marks==B.total_marks)
            {
                if(A.id < B.id){
                    cout<<A.id<<" "<<A.name<<" "<<A.section<<" "<<A.total_marks<<endl;
                }else{
                    cout<<B.id<<" "<<B.name<<" "<<B.section<<" "<<B.total_marks<<endl;
                }
                
            }else if (A.total_marks==C.total_marks)
            {
                if(A.id < C.id){
                    cout<<A.id<<" "<<A.name<<" "<<A.section<<" "<<A.total_marks<<endl;
                }else{
                    cout<<C.id<<" "<<C.name<<" "<<C.section<<" "<<C.total_marks<<endl;
                }
                
            }else if(B.total_marks==C.total_marks){
                if(B.id<C.id){
                    cout<<B.id<<" "<<B.name<<" "<<B.section<<" "<<B.total_marks<<endl;
                }else{
                    cout<<C.id<<" "<<C.name<<" "<<C.section<<" "<<C.total_marks<<endl;
                }
            }



    }
    


    



    return 0;
}

