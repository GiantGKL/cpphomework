#include<bits/stdc++.h>
using namespace std;
int main(){
    ofstream f1,f2;
    ifstream f1i,f2i;
    f1.open("f1.dat",ios::out);
    f2.open("f2.dat",ios::out);
    for (int i=1;i<=10;i++){
        int x;
        cin>>x;
        f1<<x<<" ";
    }
    f1.close();
    for (int i=1;i<=10;i++){
        int x;
        cin>>x;
        f2<<x<<" ";
    }
    f2.close();
    f1i.open("f1.dat",ios::in);
    f2.open("f2.dat",ios::app);
    for (int i=1;i<=10;i++){
        int x;
        f1i>>x;
        f2<<x<<" ";
    }
    f1i.close();
    f2.close();
    f2i.open("f2.dat",ios::in);
    int a[30];
    for (int i=1;i<=20;i++)
        f2i>>a[i];
    f2i.close();
    f2.open("f2.dat",ios::out);
    sort(a+1,a+21);
    for (int i=1;i<=20;i++)
        f2<<a[i]<<" ";
    f2.close();
    return 0;
}