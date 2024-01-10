#include<iostream>
using namespace std;

class employee
{
	static int id;
	int salary;
	
	public:
		void getdata(int s)
		{
			salary = s;
			id++;
		}
		void displaydata(void)
		{
			cout<<id<<"  "<<salary<<endl;
		}
};
int employee::id;
//int employee::id=6;
int main()
{
	employee e1,e2,e3;
	e1.getdata(1000);
	e1.displaydata() ;
	e2.getdata(2000);
	e2.displaydata() ;
	e3.getdata(3000);
	e3.displaydata() ;   
}
