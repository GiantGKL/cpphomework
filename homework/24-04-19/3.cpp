#include<bits/stdc++.h>
using namespace std;
class Test{
    private:
        int a;
        int b;
    public:
        Test(int x,int y){
            a=x;
            b=y;
            printf("构造函数调用\n");
        }
        void print(){
            printf("%d\n",a-b);
        }
        ~Test(){
            printf("析构函数调用\n");
        }
};
int main(){
    Test t(88,32);
    t.print();
    return 0;
}