#include<bits/stdc++.h>
using namespace std;
class Shape{
public:
    virtual float area() const{
        return 0.0;
    }
    void printArea(){
        cout<<area()<<endl;
    }
};
class Circle:public Shape{
public:
    Circle(float ra):r(ra){};
    virtual float area() const{
        return 3.14*r*r;
    }
private:
    float r;
};
class Rectangle:public Shape{
public:
    Rectangle(float aa,float bb):a(aa),b(bb){};
    virtual float area() const{
        return a*b;
    }
private:
    float a;
    float b;
};
class Triangle:public Shape{
public:
    Triangle(float aa,float bb,float cc):a(aa),b(bb),c(cc){};
    virtual float area() const{
        float s=(a+b+c)/2;
        return sqrt(s*(s-a)*(s-b)*(s-c));
    }
private:
    float a;
    float b;
    float c;
};
int main(){
    Circle a(2);
    Rectangle b(1,2);
    Triangle c(3,4,5);
    a.printArea();
    b.printArea();
    c.printArea();
    return 0;
}