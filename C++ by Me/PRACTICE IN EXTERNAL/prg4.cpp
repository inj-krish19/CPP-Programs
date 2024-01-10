/*	#include<iostream>
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
}								*/

/*	#include<iostream>
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
}												*/

/*	#include<iostream>
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
}								*/

/*	#include<iostream>
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
	Gaurdians::print();
	cout << "For Inheritance Class Parent Called " << endl << endl;
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
	Parent::print();
	cout << "For Inheritance Class Child Called " << endl << endl;
//	cout << "Class Child Exited " << endl << endl;
}

int main()
{
	Child C;
	C.dummy();
	return 0;
}																*/

/*	#include<iostream>
using namespace std;

// For Hybrid You Must Have To Define Child Classes

class Child{
	private :
	protected :
	public :
		void print();
		~ Child()
		{	cout << "Class Child1 Exited " << endl << endl;	}
};

void Child :: print()
{
	cout << "For Inheritance Class Child Called " << endl << endl;	
}


class Parent1 : public Child{
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
	Child::print();
}

class Parent2 : public Child
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
	Child::print();
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
}						*/

/*	#include<iostream>
using namespace std;

// For Virtual You Must Have To Define Child Classes

class Child{
	private :
	protected :
	public :
		void print();
		~ Child()
		{	cout << "Class Child Exited " << endl << endl;	}
};

void Child :: print()
{
	cout << "For Inheritance Class Child Called " << endl << endl;	
}


class Parent1 : virtual public Child{
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
	Child::print();
}

class Parent2 : virtual public Child
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
	Child::print();
}

class Parent3 : public Child
{
	private :
	protected :
	public :
		void print();
		~ Parent3()
		{	cout << "Class Parent3 Exited " << endl << endl;	}
};

void Parent3 :: print()
{
	cout << "For Inheritance Class Parent3 Called " << endl << endl;	
	Child::print();
}

class Gaurdians : public Parent1,public Parent2,public Parent3
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
	Parent3::print();
}


int main()
{
	Gaurdians G;
	G.print();
	return 0;
}					*/

