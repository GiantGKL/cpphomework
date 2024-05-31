#include<bits/stdc++.h>
using namespace std;
class Matrix{
    public:
        Matrix(){
            for (int i=0;i<2;i++)
                for (int j=0;j<3;j++)
                    num[i][j]=0;
        }
        Matrix(int n[2][3]){
            for (int i=0;i<2;i++)
                for (int j=0;j<3;j++)
                    num[i][j]=n[i][j];
        }
        Matrix operator+(Matrix &m){
            Matrix ma;
            for (int i=0;i<2;i++)
                for (int j=0;j<3;j++)
                    ma.num[i][j]=num[i][j]+m.num[i][j];
            return ma;
        }
        void display(){
             for (int i=0;i<2;i++){
                for (int j=0;j<3;j++)
                    cout<<num[i][j]<<" ";
                cout<<endl;
             }
        }
    private:
        int num[2][3];
};
int main(){
    int arr1[2][3]={{1,2,3},{4,5,6}},arr2[2][3]={{7,8,9},{10,11,12}};
    Matrix a(arr1),b(arr2);
    (a+b).display();
    return 0;
}