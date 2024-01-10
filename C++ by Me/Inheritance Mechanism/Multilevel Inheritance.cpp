#include<iostream>
using namespace std;

class Gaurdians{
	private :
	protected :
	public :
		void print();
		~ Gaurdians()
		{	cout << "Class Gaurdians Exited " << endl << endl;	}
};

void Gaurdians :: print()
{
	cout << "For Inheritance Class Gaurdians Called " << endl << endl;
//	cout << "Class Grand Father Exited " << endl << endl;
}

class Parent : public Gaurdians{
	private :
	protected :
	public :
		void print();
		~ Parent()
		{	cout << "Class Parent Exited " << endl << endl;	}
};

void Parent :: print()
{
	cout << "For Inheritance Class Parent Called " << endl << endl;
	Gaurdians::print();
//	cout << "Class Parent Exited " << endl << endl;
}

class Child : public Parent
{
	public :
		void dummy();
		~ Child()
		{	cout << "Class Child Exited " << endl << endl;	}
};

void Child :: dummy()
{
	cout << "For Inheritance Class Child Called " << endl << endl;
	Parent::print();
//	cout << "Class Child Exited " << endl << endl;
}

int main()
{
	Child C;
	C.dummy();
	return 0;
}
