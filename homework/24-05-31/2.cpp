#include<bits/stdc++.h>
using namespace std;
class Student{
public:
protected:
    int num;
    char name[10];
    char sex;
};

class Student1:protected Student{
public:
   void get_value_1();
   void display1();
private:
   int age;
   char addr[30];
};

void Student1::get_value_1(){
    cin>>num>>name>>sex;
    cin>>age>>addr;
}

void Student1::display1(){
    cout<<"num: "<<num<<endl;         
    cout<<"name: "<<name<<endl;
    cout<<"sex: "<<sex<<endl;
    cout<<"age: "<<age<<endl;
    cout<<"address: "<<addr<<endl;    
}

int main(){
    Student1 stu;
    stu.get_value_1();
    stu.display1();
}