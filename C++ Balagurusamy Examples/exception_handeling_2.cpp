//invoking function that generates exception
#include<iostream>
using namespace std;

void divide(int x, int y, int z)
{
	cout<<"\nInside divide function\n";
	cout<<x;
	if (x>100) 
		throw(x);
	if((x-y) != 0)
	{
		int r = z/(x-y);
		cout<<"\nResult of division is : "<<r<<endl;
	}
	else
		throw(x-y);
}

main()
{
	try
	{
		cout<<"\nInside try block : ";
		divide(200,20,30);
		divide(10,10,20);
		divide(170,23,34);
	}
	catch(int i)
	{
		if(i==0)
			cout<<"caught exception\n";
		if(i>100)
			cout<<"out of bound";
	}
}
