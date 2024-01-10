//inheritance explained ---- public, private and protected

#include<iostream>
using namespace std;

class base
{
	int b_a;
	protected:
		int b_b;
	public:
		int b_c;
		base(){
			b_a=b_b=b_c=10;
		}
		int getb_a()
		{
			return b_a;
		}
};
class derived_pr:base
{
	public:
		int dpr;
		display()
		{
			//cout<<endl<<b_a;              //b_a can not be accessed here as it private in base class. to access it we need a method
			cout<<endl<<getb_a()<<endl<<b_b<<endl<<b_c;    //b_c can be accesses here but not in main program because it is public in base class
		}
		derived_pr()
		{
			dpr=20;
		}
};
class derived_pc: public base
{
	public:
		display()
		{
			cout<<"inside derived class : ";
			cout<<getb_a()<<" "<<b_b<<" "<<b_c;   //the protected member is getting access here.....
		}
};

main()
{
	derived_pr d1;
	//cout<<d1.b_c;   //can't access directly becoz it is part of base class 
	cout<<d1.dpr+20;  //can access coz it is public for derived class
	d1.display();
	
	derived_pc d2;
	d2.display();
	
	cout<<"\ninside main class : ";
	cout<<d2.getb_a();
	//cout<<" "<<d2.b_b; // not allowed as protected in base class
	cout<<" "<<d2.b_c;
}
