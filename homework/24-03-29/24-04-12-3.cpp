#include<bits/stdc++.h>
using namespace std;
class Arr{
    private:
        int array[10000];
        int l;
    public:
        void read(){
            cin>>l;
            for (int i=1;i<=l;i++)
                cin>>array[i];
        }
        void write(){
            if (l==1){
                cout<<array[1];
                return;
            }
            int max=0,m=1,x;
            sort(array,array+l);
            for (int i=2;i<l;i++){
                if (array[i]==array[i-1])
                    m++;
                else{
                    if (m>max){
                        x=array[i-1];
                        max=m;
                    }
                    m=1;
                }
            }
            if (array[l]==array[l-1]&&m+1>max)
                x=array[l];
            cout<<x;
        }
};
int main(){
    Arr a;
    a.read();
    a.write();
    return 0;//sjh
}