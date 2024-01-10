//created a base class. created three private member variable. derivation 3 types private, public and protected. 

#include<iostream>
using namespace std;
class base
{
	int a;
	protected:
		int b;
	public:
		int c;
		base(){
			a=b=c=10;
		}
};
class dp_pr:base
{
	public:
		display()
		{
			cout<<"\ninside derived private : ";
			//cout<<a; //not allowed
			cout<<b;
			cout<<c;
		}
		
};
class dp_pt:protected base
{
	public:
		display()
		{
			cout<<"\ninside derived private : ";
			//cout<<a; //not allowed
			cout<<b;
			cout<<c;
		}
		
};
class dp_pb:public base
{
	public:
		display()
		{
			cout<<"\ninside derived private : ";
			//cout<<a; //not allowed
			cout<<b;
			cout<<c;
		}
		
};
main()
{
	dp_pr dr1;
	dp_pt dt1;
	dp_pb db1;
	dr1.display();
	dt1.display();
	db1.display();
}
