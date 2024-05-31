#include <iostream>
using namespace std;
class CPerson{
    private:
		int age;
		char *name;
	public:
		void print();
	    CPerson();
        CPerson(int a,char *n){
            age=a;
            name=n;
        };
        ~CPerson(){
            delete []name;
        }
};

void CPerson::print(){
	cout<<"name="<<name<<",age="<<age<<endl;
}

int  main(){
	CPerson ps(23,"张三");
	ps.print();
	return 0;
}