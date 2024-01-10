#include<iostream>
using namespace std;

// fo int add(int a,int b){ return a+b;		}
// fo int add(int a,int b,int c){return a+b+c;}
// da int add(int a,int b,int c=0,int d=0){return a+b+c+d;}
/* ref int swap(int &,int &);
int swap(int &a,int &b)
{
	int temp = a;
	a = b;
	b = temp;
	cout << a << " " << b;
	if(a > b)	return a;
	else		return b;
}
if inline int swap(int &a,int &b)
{	if(a > b)	return a;
	return b;
}	*/
/*	normal and const both are Same
const void ca(const int a)
{	cout << "A Is " << a;	}	*/

/*class Stat{
	static int count;
	public :
		static void showCount(){ cout << count << endl; count++;}
};

int Stat :: count = 1;*/

/*class A;
class B;
class A{
	private : 
	friend A ImFriend(A , B);
};
class B{
	private : 
	friend A ImFriend(A , B);
};
A ImFriend(A a,B b)
{	cout << "I am Friend Function"; return A; }	*/

/*class C{
	public : 
		C(){	cout << "I am Constructor";		}
		C(int a){	cout << "I am Constructor";		}
		~C(){	cout << "I am Destructor";		}	
};			*/
class t{};
class temp{
	public :
		temp(){		}
		temp(int t){ cout << t;	} // logic comes of b 2 c
		void operator +(temp b)
		{cout << "Addition";	}
		operator int(){ cout << "C2B"; } // logic comes of c 2 b
		temp(t s){ cout << "I AM Type 	Coversion Of Class To Class" ;	} // logic comes of b 2 c
};

int main()
{


/* 	Pointers Concepts

	char ch = 'e';
	char * const ptr = "Hello World";
	
	char const *p,* pt = ptr;
	
	cout << ptr << "	" << pt << "	";
	
	p = "KRISH";
	pt = p;
	
//	ptr = "Hello";	// error because Constant
	
	cout << pt;									*/

/*	Reference Variable

	int i=0;
	int & ref = i;
	
	cout << i << "	" << ref << endl;
	ref = 5;
	cout << i << "	" << ref;

	int *x = new int[1000];
	delete x;									*/

/*	Development Of Structure

	struct node{
		private :
			int number;
		public : 
			void method(int t)
			{	number = t;	cout << number;	}
	}A;
	
	A.method(5);								*/
	
/*	Function Oveloading		
	cout << add(2,3);
	cout << add(2,3,5);							*/

/*	Default Arguments
	cout << add(2,3);
	cout << add(2,3,5);
	cout << add(2,3,5,10);						*/

/*	Call By Reference	& Return By Reference & Inline Function
	int a=5,b=10;
	a = swap(a,b);									
	cout << a;									*/

/*	Constant Arguments
	ca(5);
	ca(6);
	ca(7);										*/
	
/*	Statcic Variable And Function
	Stat :: showCount();
	Stat :: showCount();
	Stat :: showCount();						*/

/*	Friend Function
	A t;
	B tt;
	ImFriend(t,tt);								*/

/*	Constructor & Destructor (Automatically Called At End Of Program)
	C m;										*/

/*	Operator Overloading
	temp A,B;
	A + B;										*/
	
//*	TypeCasting				
	int b=5;
	temp A;
	t C;
	A = b;	// b 2 c done using Constructor
	b = A;	// c 2 b done using Operator Overloading
	A = C;	// c 2 c done using Constructor
}
