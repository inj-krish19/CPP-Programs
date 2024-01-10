#include<iostream>
using namespace std;
	/*	FUNCTION OVERLOADING CODE
	IF YOU DONT DECLARE INLINE THAN IT
	ALSO WORKS NO PROBLEM	*/
inline float add(float a,float b)
{
	return(a+b);
}
inline int add(int a,int b,int c){
	return(a+b+c);
}

//	declarations of function over

	/*	simple default arguments begin	*/

//	ok

int default_arg(int i,int j,int k=10000)
{
	cout << i << " " << j << " " << k << endl;
}

/*	error
int error_default_arg(int i=10,int j,int k)
{
	cout << i << " " << j << " " << k << endl;
}*/

int main()
{
	int number1,number2,number3;
	float x,y;
	x = 10.02;
	y = 20.08;
	number1 = 10;
	number2 = 20;
	number3 = 30;
	cout << add(x,y);
	cout << " " << add(number1,number2,number3) << endl << endl << endl;
	
	/*		FUNCTION OVERLOADING OVERS	*/
	
	/*		DEFAULT ARGUMENTS	*/
	
	default_arg(number1,number2);	
	return 0;
}
