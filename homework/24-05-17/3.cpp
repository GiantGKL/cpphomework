#include<bits/stdc++.h>
using namespace std;
class Com{
    public:
        Com (int n,double p):num(n),price(p){}
        double average();
        void total();
        void display();
    private:
        int num;
        double price;
        static double sum;
};
double Com::sum=0;
double Com::average(){
    return (num<=10)?(price*num):(price*num*0.98);
}
void Com::total(){
    sum+=average();
    cout<<sum<<endl;
}
void Com::display(){
    cout<<average()<<endl;
    total();
}
int main(){
    Com c[3]={
        Com(5,23.5),
        Com(12,24.56),
        Com(100,21.5)
    };
    c[0].display();
    c[1].display();
    c[2].display();
    return 0;
}