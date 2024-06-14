#include<bits/stdc++.h>
using namespace std;
class Shape{
public:
    virtual float area() const=0;
};
class Circle:public Shape {
public:
    Circle(float ra):r(ra){}
    float area() const{
        return 3.14*r*r;
    }
private:
    float r;
};
class Square:public Shape {
public:
    Square(float aa):a(aa){}
    float area() const{
        return a*a;
    }
private:
    float a;
};
class Rectangle:public Shape {
public:
    Rectangle(float aa,float bb):a(aa),b(bb){}
    float area() const{
        return a*b;
    }
private:
    float a;
    float b;
};
class Trapezoid:public Shape {
public:
    Trapezoid(float aa,float bb,float hh):a(aa),b(bb),h(hh){}
    float area() const{
        return (a+b)*h/2;
    }
private:
    float a;
    float b;
    float h;
};
class Triangle:public Shape {
public:
    Triangle(float aa,float bb,float cc):a(aa),b(bb),c(cc){}
    float area() const{
        float s=(a+b+c)/2;
        return sqrt(s*(s-a)*(s-b)*(s-c));
    }
private:
    float a;
    float b;
    float c;
};
int main(){
    float sum=0;
    Circle circle(3);
    Square square(4);
    Rectangle rectangle(3,6);
    Trapezoid trapezoid(2,4,3);
    Triangle triangle(3,4,5);
    Shape* shapes[]={&circle,&square,&rectangle,&trapezoid,&triangle};
    for (Shape* shape : shapes) {
        sum+=shape->area();
    }
    cout<<sum;
    return 0;
}