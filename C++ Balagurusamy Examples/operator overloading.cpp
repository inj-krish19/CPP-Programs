//operator overloading

#include<iostream>
using namespace std;

class point
{
	int x,y,z;
	public:
		void getdata(int a,int b, int c)
		{
			x=a;
			y=b;
			z=c;
		}
		void display()
		{
			cout << "\nThe point is : ("<<x<<","<<y<<","<<z<<")";
		}
		void operator-()
		{
			x=-x;
			y=-y;
			z=-z;
		}
};
int main()
{
	point p1;
	p1.getdata(2,3,4);
	p1.display() ; 
	-p1;
	p1.display() ;
	-p1;
	p1.display() ;
}
