#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
        int id;
        int grade;
};
int main(){
    Student stu[5];
    for (int i=0;i<5;i++)
        stu[i].id=2023413485+i,stu[i].grade=59+i;
    Student *s=stu;
    for (int i=0;i<3;i++){
        cout<<"id:"<<s->id<<"\ngrade:"<<s->grade<<"\n";
        s+=2;
    }
    return 0;
}