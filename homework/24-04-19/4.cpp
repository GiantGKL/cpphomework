#include<bits/stdc++.h>
using namespace std;
class Student{
    private:
        int num;
        string name;
    public:
        Student(){
            num=0;
            name="王小明";
        }
        Student(int _num,string _name){
            num=_num;
            name=_name;
        }
        ~Student(){
            cout<<num<<" "<<name<<" 退出程序"<<endl;
        }
};
int main(){
    int num[3];
    string name[3];
    for (int i=0;i<3;i++)
        cin>>num[i]>>name[i];
    Student stu1(num[0],name[0]);
    Student stu2(num[1],name[1]);
    Student stu3(num[2],name[2]);
    Student stu4;
    return 0;
}