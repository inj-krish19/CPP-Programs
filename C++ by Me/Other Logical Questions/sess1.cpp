/*

--------------------------------------------------------		


#include<iostream>
using namespace std;

int main()
{
	int a=5,b=10,c=19,*ptr;
	ptr = &a;
	cout << "Normal Pointer " << *ptr << endl << endl;
	
//	constant to pointer

	cout << endl << "Constant To Pointer ";

	int * const ptr1 = &b;
	cout << *ptr1 << endl;
	
	//ptr1 = &c;		not allowed
	cout << endl << "In Constant To Pointer " 		<< endl
	 <<	"You Can't Change Address Of Reference" 	<< endl
	 << "Variable Using Pointer Is"					<< endl
	 << "Allowed Means *ptr1 = &address; Is Illegal"
	 << "	" << *ptr1 << endl;

	*ptr1 = 2;			//	allowed
	cout << endl << "In Constant To Pointer "  	<< endl
	 <<	"You Can Change Value Of " 				<< endl
	 << "Variable Using Pointer Is" 			<< endl
	 << "Allowed Means *ptr1 = value; Is Legal"
	 << "		" << *ptr1 << endl;
	 
	 
//	pointer to constant

	cout << endl << "Pointer To Constant ";

	int const * ptr2 = &c;
	cout << *ptr2 << endl;
	
	ptr2 = &b;		//	allwoed
	cout << endl << "In Pointer To Constant " 	<< endl
	 <<	"You Can Change Address Of Reference" 	<< endl
	 << "Variable Using Pointer Is"				<< endl
	 << "Allowed Means *ptr2 = &address; Is Legal"
	 << "	" << *ptr2 << endl;
	 
//	*ptr2 = 8;			not allwoed
	cout << endl << "In Pointer To Constant"<< endl
	 <<	"You Can Change Value Of " 			<< endl
	 << "Variable Using Pointer Is" 		<< endl
	 << "Allowed Means *ptr2 = value; Is Illegal"
	 << "		" << *ptr2 << endl;

	
}


--------------------------------------------------------		*//*


#include<iostream>
using namespace std;

int main()
{
	int a= 19;
	int &ref = a;
	
	cout  << "Normal Varialbe , Reference Variable ";
	cout << a << "	" << ref << endl << endl;
	
	cout << "If We Change The Value Of Either Normal Variable"	<< endl
		 << "Or Reference Variable Both Value Will Be Affected" << endl;

	a = 10;
	cout << endl << "Changed Value Of Normal Variable";
	cout << "	"<< a << "	" << ref << endl;
	
	ref = 19;
	cout << endl << "Changed Value Of Reference Variable";
	cout << "	"<< a << "	" << ref << endl;

}


------------------------------------------------------------------				*//*


#include<iostream>
using namespace std;

int main()
{
	
	cout << "Memory Allocation " << endl;
	int *p;
	p = new int(5);	
//orp = new int[5];	
	cout << "Size Of Integer Is " << sizeof(int) << endl;
	cout << "Size Of Pointer Is " << sizeof(p) 	 << endl;

	delete []p;	// or delete p;
	cout << "Memory Deleted Successfully ";
}


--------------------------------------------------------------------			*//*


#include<iostream>
using namespace std;
inline void ok(int a,int b,...)
{	cout << "OK\nDon't Have Idea Of Accesing Others\n\n";	}
inline void ok(int a,int b,int c)
{	cout << "\nIt Have Only Three Argument\n\n";	}
inline void ok(int a,int b)
{	cout << "\nIt Have Only Two Argument\n\n";	}
int main()
{
	ok(5,10,15,20);
	ok(10,15,20);
//	ok(15,20);
}


--------------------------------------------------------------------			*//*


#include<iostream>
using namespace std;
int sub(int a,int b=0,int c=0,int d=0,int e=0)
{	return(a-(b+c+d+e));	}

int main()
{
	cout << sub(2,1)		<< endl;
	cout << sub(2,1,-3)		<< endl;
	cout << sub(2,1,2,-1)	<< endl;
	cout << sub(4,1,9,-1,-6)<< endl;
}


--------------------------------------------------------------------			*/


#include<iostream>
using namespace std;

int main()
{
	
}
