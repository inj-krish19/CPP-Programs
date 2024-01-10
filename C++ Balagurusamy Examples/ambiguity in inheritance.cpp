#include<iostream>
using namespace std;
class c1
{
	protected: int a;
	public:
		c1(int x)
		{
			a=x;
		}
		display()
		{
			cout<<"\nfrom class 1 : "<<a;
		}
};
class c2
{
	protected: int b;
	public:
		c2(int x)
		{
			b=x;
		}
		display()
		{
			cout<<"\nfrom class 2 : "<<b;
		}
};
class d:public c1,public c2
{
	int p;
	public:
		d(int a,int b,int c):c1(a),c2(b)
		{
			p=c;
		}
		void display()
		{
			cout<<"\nFrom Derived class : "<<a<<" "<<b<<" "<<p;
		}
};
main()
{
	d d1(2,3,14);
	d1.display() ;
	
	d1.c1::display();
	d1.c2::display();
}
