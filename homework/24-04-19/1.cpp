#include <iostream>
using namespace std;
class CPoint
{
	public:
		void set(int x,int y);
		void print();
	private:
		int x;
		int y;
};

void CPoint::set(int x,int y){
	x=x;
	y=y;
}
void CPoint::print(){
	cout<<"x="<<x<<",y="<<y<<endl;
}
int main()
{
	CPoint pt;
	pt.set(10,20);
	pt.print();
}