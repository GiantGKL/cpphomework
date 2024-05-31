#include<bits/stdc++.h>
using namespace std;
class Cuboid{
    public:
    void read(){
        scanf("%d%d%d",&length,&width,&height);
    }
    int caculate(){
        return length*width*height;
    }
    void write(){
        printf("%d",caculate());
    }
    private:
    int length;
    int width;
    int height;
};
int main(){
    Cuboid a,b,c;
    a.read();
    b.read();
    c.read();
    a.write();
    b.write();
    c.write();
    return 0;
}