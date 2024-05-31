#include<bits/stdc++.h>
using namespace std;
class Triangle{
    private:
        int a=1,b=2,c=3,s,area;
    public:
        Triangle(){}
        Triangle(int x){
            a=x;
        }
        Triangle(int x,int y){
            a=x;
            b=y;
        }
        Triangle(int x,int y,int z){
            a=x;
            b=y;
            c=z;
        }
        ~Triangle(){
            cout<<"三角形边为a="<<a<<",b="<<b<<",c="<<c<<"的三角形被析构"<<endl;
        }
        void in(){
            cin>>a>>b>>c;
        }
        void js(){
            s=(a+b+c)/2;
            area=sqrt(s*(s-a)*(s-b)*(s-c));
        }
        void out(){
            cout<<a<<" "<<b<<" "<<c<<" "<<s<<" "<<area<<endl;
        }
};
int main(){
    Triangle t1,t2(3),t3(3,4),t4(3,4,5);
    return 0;
}