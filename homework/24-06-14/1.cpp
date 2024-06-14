#include<bits/stdc++.h>
using namespace std;
class Teacher{
public:
    void display();
    Teacher(const string& n,int a,const string& g,const string& addr,int te,const string& ti):
    name(n),age(a),gender(g),address(addr),tel(te),title(ti){}
protected:
    string name;
    int age;
    string gender;
    string address;
    int tel;
    string title;
};
class Cadre{
public:
    Cadre(const string& n,int a,const string& g,const string& addr,int te,const string& po):
    name(n),age(a),gender(g),address(addr),tel(te),post(po){}
protected:
    string name;
    int age;
    string gender;
    string address;
    int tel;
    string post;
};
class Teacher_Cadre:public Teacher,public Cadre{
public:
    Teacher_Cadre(const string& n,int a,const string& g,const string& addr,int te,const string& ti, const string& po,int wa):
    Teacher(n,a,g,addr,te,ti),Cadre(n,a,g,addr,te,po),wages(wa){}
    void show();
private:
    int wages;
};
void Teacher::display(){
    cout<<"姓名："<<name<<endl;
    cout<<"年龄："<<age<<endl;
    cout<<"性别："<<gender<<endl;
    cout<<"地址："<<address<<endl;
    cout<<"电话："<<tel<<endl;
    cout<<"职称："<<title<<endl;
}
void Teacher_Cadre::show(){
    display();
    cout<<"职务："<<post<<endl;
    cout<<"工资："<<wages<<endl;
}
int main(){
    Teacher_Cadre tc("test",40,"male","Qufu",12345,"老师","未知",5000);
    tc.show();
    return 0;
}