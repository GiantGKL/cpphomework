#include<iostream>
using namespace std;
class Point //Point类声明
{
    private:   //私有数据成员
        int X,Y;
        static int countP;
    public:  //外部接口
        Point(int xx=0, int yy=0){X=xx;Y=yy;countP++;}
        Point(Point &p);  //拷贝构造函数
        int GetX(){return X;}
        int GetY(){return Y;}
        static void GetC(){
            cout<<" Object id="<<countP<<endl;
        }
};
Point::Point(Point &p){  
    X=p.X;
    Y=p.Y;
    countP++;
}
int Point::countP=0;
int main()            //   主函数实现{ 
{
    Point A(4,5);      //   声明对象A
    cout<<"Point A,"<<A.GetX()<<","<<A.GetY();
    A.GetC();        //   输出对象号，对象名引用
    Point B(A);       //   声明对象B
    cout<<"Point B,"<<B.GetX()<<","<<B.GetY();
    Point::GetC();    //输出对象号，类名引用
    return 0;
}