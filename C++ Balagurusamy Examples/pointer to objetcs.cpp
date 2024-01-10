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
	cout<<a1.display_balance();
}
