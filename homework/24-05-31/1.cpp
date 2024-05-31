#include<bits/stdc++.h>
using namespace std;
class Student{
protected:
    int num;
    string name;
    char sex; 
public:
  	void display(){
        cout<<"num: "<<num<<endl;
        cout<<"name: "<<name<<endl;
        cout<<"sex: "<<sex<<endl;
    }
};

class Student1:public Student{
private:
    int age;
    char addr[20]; 
public:
	void display(){ 
        cout<<"num: "<<num<<endl;
        cout<<"name: "<<name<<endl;
        cout<<"sex: "<<sex<<endl;
        cout<<"age:"<<age<<endl;
        cout <<"address:"<< addr<<endl;
    }
    void in();
};

void Student1::in(){
    cin>>num>>name>>sex>>age>>addr;
}
int main(){
    Student1 stu;
    stu.in();
    stu.display();
    return 0;
}