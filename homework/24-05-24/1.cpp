#include<bits/stdc++.h>
using namespace std;
class Complex{
    public:
        Complex(){
            real=0;
            imag=0;
        }
        Complex(double r,double i){
            real=r;
            imag=i;
        }
        Complex operator+(Complex &c){
            return Complex(real+c.real,imag+c.imag);
        }
        friend Complex operator+(double d,Complex &c){
            return Complex(d+c.real,c.imag);
        }
        Complex operator+(double d){
            return Complex(real+d,imag);
        }
        void display(){
            if (real==0&&imag==0)
                cout<<0<<endl;
            else
                if (real==0)
                    cout<<imag<<"i\n";
                else
                    if (imag==0)
                        cout<<real<<endl;
                    else
                        if (imag<0)
                            cout<<real<<"-"<<-imag<<"i\n";
                        else
                            cout<<real<<"+"<<imag<<"i\n";
        }
    private:
        double real;
        double imag;
};
int main(){
    Complex c1={1,-1},c2={2,2};
    (c1+c2).display();
    (c1+2).display();
    (1+c2).display();
    return 0;
}