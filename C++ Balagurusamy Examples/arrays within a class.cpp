#include<iostream>
using namespace std;

const m=50;
class order
{
	int itemcode[m];
	float itemprice[m];
	int count;
	public:
		void cnt(void)
		{
			count=0;
		}
		void getitem(void);
		void display(void);
		void remove(void);
		void displayitems(void);
};

void items::getitem(void)
{
	cout<<"Enter item "<<endl;
	cin>>itemcode[count];
	cout<<"enter price :";
	cin>>itemprice[count];
	count++;
}
void order::displaysum(void)
{
	float sum=0;
	for(int i=0;i<count;i++)
		sum+=itemprice[i];
		cout<<"\ntotal value is "<<sum<<"\n";
}
void order::displayitems(void)
{
	cout<<"\ncode price\n";
	for(int i=0;i)
}
