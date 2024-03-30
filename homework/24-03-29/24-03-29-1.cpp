#include <iostream>
using namespace std;
class Time{
    public:  
    void set_time(void);
    void show_time(void);                    
    private:
    int hour;
    int minute;
    int sec;
};
Time t;
void Time::set_time(void){
  cin>>t.hour;
  cin>>t.minute;
  cin>>t.sec;
}
void Time::show_time(void){
    cout<<t.hour<<":"<<t.minute<<":"<<t.sec<<endl;
}
int main(){
    t.set_time();
    t.show_time();
}