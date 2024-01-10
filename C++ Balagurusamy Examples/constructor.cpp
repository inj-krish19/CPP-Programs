#include<cstring>
#include<iostream>
using namespace std;

class car
{
	string brand;
	int modelyear;
	public:
		void getdata()
		{
			cout<<"Enter brand : ";
			cin>> brand;
			cout<<endl<<"Enter Year : ";
			cin>>modelyear;
		}
		void displaydata()
		{
			cout<<endl<<brand<<"   "<<modelyear;
		}
		car(string,int);
		car (string x)
		{
			brand=x;
			modelyear=2000;
		}
		car()
		{
			brand = "NULL";
			modelyear=0;
		}
		//copy constructor
		car (car &x)
		{
			brand = x.brand ;
			modelyear = x.modelyear ;
		}
};
car :: car (string x ,int y)  //y=2000
{
	brand=x;
	modelyear=y;
}
int main()
{
	car c1("honda",2012),c2("maruti",2020),c3("ford"),c4(c1);
	car c5,c6;
	c5=c2;
	c1.displaydata() ;
	c2.displaydata() ;
	c3.displaydata() ; 
	c4.displaydata() ;
	c5.displaydata() ;
	c6.displaydata() ;
}
