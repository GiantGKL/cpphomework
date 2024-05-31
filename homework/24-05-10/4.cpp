#include<bits/stdc++.h>
using namespace std;
class Matrix{
    public:
        Matrix();
        void transpose();
        void input();
        void display();
    private:
        int mat[2][3];
};
void Matrix::input(){
    for (int i=0;i<2;i++)
        for (int j=0;j<3;j++)
            cin>>mat[i][j];
}
void Matrix::display(){
    for (int i=0;i<2;i++){
        for (int j=0;j<3;j++)
            cout<<mat[i][j]<<" ";
        cout<<"\n";
    }
}
void Matrix::transpose(){
    int t;
    for (int i=0;i<2;i++)
        for (int j=i+1;j<3;j++){
            t=mat[i][j];
            mat[i][j]=mat[j][i];
            mat[j][i]=t;
        }
}
int main(){
    Matrix ma;
    ma.input();
    ma.transpose();
    ma.display();
    return 0;
}