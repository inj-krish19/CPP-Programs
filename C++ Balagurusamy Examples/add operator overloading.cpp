//adding two numbers
//adding two points
//adding two complex numbers
//adding two strings


#include<iostream>
using namespace std;

class point
{
	int x,y,z;
	public:
		point(){
		}
		point(int a,int b,int c)
		{
			x=a;
			y=b;
			z=c;
		}
		point operator +(point p)
		{
			point p1;
			p1.x=x+p.x ;
			p1.y=y+p.y;
			p1.z = z+p.z;
			return(p1);
		}
		void display()
		{
			cout << "\nThe point is : ("<<x<<","<<y<<","<<z<<")";
		}
};

class complex
{
	int real,imaginary;
	public:
		void acceptnumber(int r, int i)
		{
			real=r;
			imaginary=i;
			cout<<"\ninmethod"<<real<<imaginary;
		}
		void display()
		{
			cout<<endl<<endl<<real  <<" + "<<imaginary  <<"i";	
		}
		complex operator+(complex c)
		{
			complex c1;
			c1.real = real + c.real ;
			c1.imaginary = imaginary + c.imaginary ;
			return(c1);
		}
		
};

int main()
{
	int x=5,y=9,z;
	z=x+y;
	point p1(2,3,4),p2(1,2,3),p3;
	cout<<"\nAdding two integers : "<<z;
	p3=p1+p2;
	p3.display() ;

	complex c1,c2,c3;
	c1.acceptnumber(7,8);
	c2.acceptnumber(9,3);
	  
}
