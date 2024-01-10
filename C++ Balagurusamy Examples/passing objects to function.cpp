#include<iostream>
using namespace std;

class time
{
	int hours,minutes;
	public:
		void accepttime(int h, int m)
		{
			hours=h;
			minutes = m;
		}
		void accepttime()
		{
			cout<<"enter hours : ";
			cin>>hours;
			cout<<"enter minutes : ";
			cin>>minutes;
		}
		void displaytime()
		{
			cout<<endl<<hours<<"  "<<minutes;
		}
		void sum(time t1,time t2)
		{
			t1.accepttime() ;
			t2.accepttime() ;
			hours = t1.hours + t2.hours ;
			minutes = t1.minutes + t2.minutes ;
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
		
		int getreal()
		{
			return real;
		}
		int getimaginary()
		{
			return imaginary;
		}
		friend complex addnumbers(complex , complex);
		void show(complex);
};
complex addnumbers(complex c1,complex c2)
		{
			complex c3;
			c3.real = c1.real + c1.real ;
			c3.imaginary = c1.imaginary + c2.imaginary ;
			cout<<"\ninmethod"<<c3.real<<c3.imaginary;
			return(c3);
		}
void complex::show(complex cn)
{
	cout<<endl<<endl<<cn.real  <<" + "<<cn.imaginary  <<"i";	
}
int main()
{
	time t1,t2,t3;
//	t1.accepttime(3,45);
//	t2.accepttime(4,40);
	t3.sum(t1,t2);
	t3.displaytime() ; 
	
	complex cn1,cn2,cn3;
	cn1.acceptnumber(2,3);
	cn2.acceptnumber(3,4);
	cn3 = addnumbers(cn1,cn2);
	cn3.show(cn3); 
}
