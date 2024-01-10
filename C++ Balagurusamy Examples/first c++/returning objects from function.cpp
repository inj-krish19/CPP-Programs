#include<iostream>
using namespace std;

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
		complex add(complex c1)
		{
			complex c3;
			c3.real = real+ c1.real ;
			c3.imaginary = imaginary + c1.imaginary ;
			return(c3);
		}
		void show();
};

void complex::show()
{
	cout<<endl<<endl<<real  <<" + "<<imaginary  <<"i";	
}
int main()
{
	
	complex cn1,cn2,cn3;
	cn1.acceptnumber(2,3);
	cn2.acceptnumber(3,4);
	cn3 = cn2.add(cn1);
	cn3.show() ; 
}
