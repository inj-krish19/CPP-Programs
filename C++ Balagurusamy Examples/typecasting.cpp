//type casting
#include<iostream>
using namespace std;
class time
{
	int hrs;
	int mins;
	public :
		time(){
		}
		time(int t)
		{
			hrs =  t/60;
			mins = t%60;
		}
		void display ()
		{
			cout<<hrs<<":"<<mins;
		}
		operator int()
		{
			return(hrs*60+mins);
		}
};
class invent2;
class invent1
{
	int code,qty,price;
	public:
		invent1()
		{
			code=qty=price=0;
		}
		invent1(int c, int q, int p)
		{
			code=c;
			qty=q;
			price=p;
		}
		display()
		{
			cout<<"code = "<< code<<" "<<"qty = "<<qty<<"  price = "<<price;
		}
		int getquantity()
		{
			return qty;
		}
		int getprice()
		{
			return price;
		}
		int getcode()
		{
			return code;
		}
		
//		operator invent2()
//		{
//			invent2 i2;
//			i2.code = code;
//			i2.value = qty * price;			
//			return i2;
//		}
		
};
class invent2
{
	int code,value;
	public:
		invent2()
		{
			code=value=0;
		}
		invent2(int c, int v)
		{
			code=c;
			value=v;
		}
		display()
		{
			cout<<"\n\ncode = "<< code<<" "<<"value = "<<value;
		}
		invent2(invent1 i1)
		{
			code = i1.getcode();
			value = i1.getquantity()*i1.getprice();	
		}
		
		
};
int main()
{
	time t1;
	int duration=85;
	t1=duration;
	t1.display() ;
	cout<<endl<<t1;
	
	invent1 s(101,5,50);
	invent2 d;
	d = s;
	d.display();
}
