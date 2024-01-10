#include<iostream>
using namespace std;

class Base{
	private :
		int temp;
	protected :
	public :
		void print(int );
};

void Base :: print(int t)
{
	temp = t;
	cout << "Temp Is " << temp << endl;	
}

class Derived : public Base{
	public :
		void dummy();
};

void Derived :: dummy()
{
	print(20);
}

int main()
{
	Base B;
	Derived D;
	B.print(10);
	D.dummy();
	return 0;
}
