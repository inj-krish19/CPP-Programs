//nesting of classes
#include<iostream>
using namespace std;
class cdate
{
	int date,month,year;
	public:
		cdate(){
			date=1;
			month=1;
			year=2000;
		}
		
		cdate(int d, int m, int y)
		{
			date =d;
			month=m;
			year=y;
		}
		displaydate(){
			cout<<"date is : "<<date<<" : "<<month<<" : "<<year; 
		}
		cdate getdate()
		{
			cdate c1;
			c1.date = date;
			c1.month = month;
			c1.year = year;
			return c1;
		}
};
class student
{
	int sid,percentage;
	cdate d_admission;
	public:
		student(){
		}
		student(int i,int p,int d,int m,int y):d_admission(d,m,y)
		{
			sid=i;
			percentage=p;
		}
		setdata(int i,int p,int d,int m,int y)
		{
			sid=i;
			percentage=p;
			d_admission=cdate(d,m,y);
		}
		displaydata(){
			cout<<" "<<sid<<" "<<percentage<<" ";
			d_admission.displaydate();
		}
};
main()
{
	student s1(101,98,27,2,2012);
	//s1.setdata(1,98,27,2,2012);
	s1.displaydata();
}
