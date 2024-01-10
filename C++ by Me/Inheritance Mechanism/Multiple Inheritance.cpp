#include<iostream>
using namespace std;

class Base1{
	private :
	protected :
	public :
		void print();
};

void Base1 :: print()
{
	cout << "Multiple Inheritance Happening From Class Base 1 " << endl << endl;
}

class Base2{
	private :
	protected :
	public :
		void print();
};

void Base2 :: print()
{
	cout << "Multiple Inheritance Happening From Class Base 2 " << endl;
}

class Derived : public Base1,public Base2
{
	public :
		void dummy();
};

void Derived :: dummy()
{
	Base1::print();
	Base2::print();
}

int main()
{
	Derived D;
	D.dummy();
	return 0;
}
