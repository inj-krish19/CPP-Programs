#include <cstring>
#include <iostream>
using namespace std;

class employee
{
	static int id;
	int salary;
	char name[50];
	char city[50];
	int age;
	char gender;
	public:
		void getdata(int s,char n[],char ct[],int a,char g)
		{
			salary =s;
			strcpy(name,n);
			strcpy(city,ct);
			age=a;
			gender=g;
		}
		void displaydata(void)
		{
			cout<<endl<<id<<" "<<salary<<" "<<name<<" "<<city<<" "<<age<<" "<<" "<<gender;
		}
};
int employee::id;
int main()
{
	employee e1,e2,e3;
	char name[50]="aaa";
	e1.getdata(1000,name,"ct1",23,'m');
	e1.displaydata() ;
	e2.getdata(2000,name,"ct2",24,'f');
	e2.displaydata() ;
	e3.getdata(1000,name,"ct3",22,'m');
	e3.displaydata() ;	 
}
