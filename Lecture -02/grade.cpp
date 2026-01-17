#include<iostream>
using namespace std;
int main(){
    float e,m,s,h,per;
    cout<<"Enter marks of Maths :";
    cin>>m;
    cout<<"Enter marks of English :";
    cin>>e;
    cout<<"Enter marks of Science :";
    cin>>s;
    cout<<"Enter marks of Hindi :";
    cin>>h;
    per=(e+m+s+h)/4;
    if(m>0 && m<=100 && e>0 && e<=100 && s>0 && s<=100 && h>0 && h<=100)
    {
        cout<<"Valid Marks Entered"<<endl;
        if(per>=90 && per<=100)
        {
            cout<<"Grade A";
            cout<<per;
        }
         else if(per>=80 && per<90)
        {
            cout<<"Grade B";
            cout<<per;
        }
         else if(per>=65 && per<80)
        {
            cout<<"Grade C";
            cout<<per;
        }
         else if(per>=45 && per<65)
        {
            cout<<"Grade D";
            cout<<per;
        } 
    }
    else
    {
        cout<<"Invalid Marks Entered";
    }
    return 0;

}