
//compares two points for equality
//compares two circle to find the bigger circle
//comares area of circle and rectangle


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
		bool operator ==(point p)
		{
		if (p.x==x and p.y==y and p.z == z)
			return(true);
		else
			return(false);
		}
		void display()
		{
			cout << "\nThe point is : ("<<x<<","<<y<<","<<z<<")";
		}
};
class rectangle;
class circle
{
	int radius;
	public:
		void getdata(int r)
		{
			radius=r;
		}
		float getarea()
		{
			return(3.14*radius*radius);	
		}
		bool operator >(circle c)
		{
			if (radius == c.radius)
				return 1;
			else
				return 0;	
		}
	friend int comparearea_circle_rectangle(circle c,rectangle r);	
};
class rectangle
{
	int length,bredth;
	public:
		void getdata(int l,int b)
		{
			length =l;
			bredth =b;
		}
		int getarea()
		{
			return (length*bredth);
		}
	friend int comparearea_circle_rectangle(circle c,rectangle r);
};

int comparearea_circle_rectangle(circle c,rectangle r)
{
	if(c.radius > r.length)
		return(1);
	else
		return(0);
}

int main()
{
	int x=5,y=9,z;
	
	point p1(2,3,4),p2(1,2,3),p3(1,2,3);
	cout<<"\nComparing two integers : "<<(x<y);
	cout<<"\nComparing two points for equality ";
	if(p1 == p2)
		cout<<"\nEqual";
	else
		cout<<"\nNot Equal";
	if(p3 == p2)
		cout<<"\nEqual";
	else
		cout<<"\nNot Equal";
	
	circle c1,c2;
	c1.getdata(3);
	c2.getdata(4);  
	if(c1 > c2)
		cout<<"\nc1 is greater";
	else
		cout<<"\nc2 is greater";
	
	rectangle r1;
	r1.getdata(4,5);
	cout <<"\nComparing circle and rectangle : "<< comparearea_circle_rectangle(c1,r1); 
}
