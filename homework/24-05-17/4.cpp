#include<iostream>
using namespace std;
class Date;
class Time{
    private:
        int hour;
        int minute;
        int sec;
    public:
        Time(int,int,int);
        friend void display(const Date &da,const Time &ti);
};
class Date{
    private:
        int month;
        int day;
        int year; 
    public:
        Date(int,int,int);
        friend void display(const Date &da,const Time &ti);
};
Time::Time(int h,int m,int s){
    hour=h;
    minute=m;
    sec=s;
}
void display(const Date &da,const Time &ti){
    cout<<da.month<<"/"<<da.day<<"/"<<da.year;
    cout<<endl;
    cout<<ti.hour<<":"<<ti.minute<<":"<<ti.sec<<endl;
}
Date::Date(int m,int d,int y){
    month=m;
    day=d;
    year=y;
}
int main(){  
    Time t1(10,13,56);
    Date d1(12,25,2004);
    display(d1,t1);
    return 0; 
}