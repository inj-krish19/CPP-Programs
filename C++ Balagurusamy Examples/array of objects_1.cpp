
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
		void getdata()
		{
			cout<<"\nEnter Salary : ";
			cin>>salary;
			cout<<"\nEnter name : ";
			cin>>name;
			cout<<"\nEnter city : ";
			cin>>city;
			cout<<"\nEnter age : ";
			cin>>age;
			cout<<"\nEnter gender ('m' for male, 'f' for female) : ";
			cin>>gender;
			id++;
		}
		void displaydata(void)
		{
			cout<<endl<<id<<" "<<name<<" "<<salary<<" "<<city<<" "<<age<<" "<<" "<<gender;
		}
		int getsalaray()
		{
			return salary;
		}
		char getgender()
		{
			return gender;
		}
		int getage()
		{
			return age;
		}
		
};

int employee::id;

int main()
{
	employee e[5],e1;
	
	int max=0,pos,m25count=0;
	
	for(int i=0;i<5;i++)
		e[i].getdata();
	
	for(int i=0;i<5;i++)
		e[i].displaydata() ;
		
	for(int i=0;i<5;i++)
	{
		if(max<e[i].getsalaray() )
		{
			max = e[i].getsalaray() ;
			pos=i;
		}
		if(e[i].getgender() == 'm' and e[i].getage() > 25)
			m25count++;
		
	}
	cout<<"\nEmployee with maximum salary is : " ;
	e[pos].displaydata() ;	
	cout<<"\nNumber of male employees of age > 25 is : "<<m25count;
//	cout<<e1.salarymorethan10000(e); 

}

