#include<iostream>
using namespace std;
class Student{
    public:
        Student(int n,float s):num(n),score(s){}
        void change(int n,float s) const{
            cout<<"常量不能修改\n";
        }
        void display() const{
            cout<<num<<" "<<score<<endl;
        }
    private:
        int num;
        float score;
 }; 

int main(){
    const Student stud(105,95.5);
    stud.display();
    stud.change(101,80.5);
    stud.display();
    return 0;
}