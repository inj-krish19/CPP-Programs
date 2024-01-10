#include<iostream>
using namespace std;

class b
{
	int a;
	public:
		int b;
		void set_a(int);
		int get_a();
};
class d:public b
{
	int c;
	public:
		void mul();
		void display();
};

class d_p: b
{
	int e;
	public:
		void set_e()
		{
			e=10;
		}
		void display()
		{
			cout<<"\nfrom d_p values of a,b,e are "<<get_a()<<" "<<b<<" "<<e;
		}
};

void b::set_a(int x)
{
	a=x;
	
}
int b::get_a()
{
	return a;
}
void d::mul(void)
{
	c=b*get_a();
}
void d::display() 
{
	cout <<" \n\nvalue of a,b,c are : "<<get_a()<<"  "<<b<<"  "<<c;	
} 

int main()
{
	class d d1;
	d1.set_a(3);
	d1.b=4;
	d1.mul() ;
	d1.display() ;
	
	class d_p dp1;
	dp1.set_e() ;
	//dp1.set_a(5); 
	//dp1.b = 5; 
	dp1.display() ;
}
