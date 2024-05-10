#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
        int id;
        int grade;
};
void max(Student *s){
    int max=s[0].grade;
    int id=s[0].id;
    for (int i=1;i<5;i++)
        if (s[i].grade>max){
            max=s[i].grade;
            id=s[i].id;
        }
    cout<<id<<endl;
}
int main(){
    Student stu[5];
    for (int i=0;i<5;i++)
        stu[i].id=2023413485+i,stu[i].grade=59+i;
    Student *s=stu;
    max(s);
    return 0;
}