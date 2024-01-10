#include<iostream>
using namespace std;

// For Hierarchical You Must Have To Define Child Classes

class Child1{
	private :
	protected :
	public :
		void print();
		~ Child1()
		{	cout << "Class Child1 Exited " << endl << endl;	}
};

void Child1 :: print()
{
	cout << "For Inheritance Class Child1 Called " << endl << endl;	
}

class Child2{
	private :
	protected :
	public :
		void print();
		~ Child2()
		{	cout << "Class Child2 Exited " << endl << endl;	}
};

void Child2 :: print()
{
	cout << "For Inheritance Class Child2 Called " << endl << endl;	
}


class Parent1{
	private :
	protected :
	public :
		void print();
		~ Parent1()
		{	cout << "Class Parent1 Exited " << endl << endl;	}
};

void Parent1 :: print()
{
	cout << "For Inheritance Class Parent1 Called " << endl << endl;
}

class Parent2 : public Child1,public Child2
{
	private :
	protected :
	public :
		void print();
		~ Parent2()
		{	cout << "Class Parent2 Exited " << endl << endl;	}
};

void Parent2 :: print()
{
	cout << "For Inheritance Class Parent2 Called " << endl << endl;	
	Child1::print();
	Child2::print();
}


class Gaurdians : public Parent1,public Parent2
{
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
	Parent1::print();
	Parent2::print();
}


int main()
{
	Gaurdians G;
	G.print();
	return 0;
}
