//explaining protected members
#include<iostream>
using namespace std;
class base
{
	
	protected:
		int b;
	public:
		base(){
			b=10;
		}
};
class dprot_pr:base  //derive protected privately
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

class dprot_pb:public base //derive protected publically
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

