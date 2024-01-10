#include<iostream>
using namespace std;

class Base{
	private :
		int temp;
	protected :
	public :
		void print();
};

void Base :: print()
{
	cout << "Single Inheritance Happening ";
}

class Derived : public Base{
	public :
		void dummy();
};

void Derived :: dummy()
{
	print();
}

int main()
{
	Derived D;
	D.dummy();
	return 0;
}
