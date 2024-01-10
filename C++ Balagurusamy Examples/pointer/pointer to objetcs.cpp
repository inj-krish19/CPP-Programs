#include<iostream>
using namespace std;

class date
{
	int day;
	int month;
	int year;
	public:
		date(){
		}
		date(int d, int m, int y){
			day=d;
			month=m;
			year=y;			
		}
		setdate(int d, int m, int y)
		{
			day=d;
			month=m;
			year=y;
		}
		int getday()
		{
			return day;
		}
		int getmonth()
		{
			return month;
		}
		int getyear()
		{
			return year;
		}
};
class account
{
	long int acc_no;
	string acc_holder;
	long int balance;
	date d_open, d_close, dob;
	public:
		account(){
		}
		account(long int an, string nm, long int b,int d,int m, int y):dob(d,m,y)
		{
			acc_no = an;
			acc_holder = nm;
			balance = b;
		}
		setdata(long int an, string nm, long int b,int d,int m, int y)
		{
			acc_no = an;
			acc_holder = nm;
			balance = b;
			dob.setdate(d,m,y);
		}
		deposit(int amt)
		{
			balance += amt;
		}
		withdraw(int amt)
		{
			if(balance-amt <=1000)
				cout << "\nnot enough balance";
			else
				balance -= amt;
		}
		long int display_balance()
		{
			return balance;
		}
		giveinterest()
		{
			if(dob.getyear() > 1963)
				balance += balance * 0.07;
			else
				balance += balance * 0.06;
		}
};
main()
{
	account a1(1111111,"Atul Vyas",10000,25,1,1960);
	account *accptr = new account[5];
	account *temp = accptr;
	for(int i=0;i<5;i++)
	{
		accptr->setdata(1111*(i+3),"Aman Vyas",1111+i*2+10,25+(i*10),1+i+5,1962+i);
		accptr++;
	}
	accptr=temp;
	for(int i=0;i<5;i++)
	{
		cout<<"balance before interest : "<<accptr->display_balance()<<endl;
		accptr->giveinterest();
		cout<<"balance after interest : "<<accptr->display_balance()<<endl;	
	}
}
