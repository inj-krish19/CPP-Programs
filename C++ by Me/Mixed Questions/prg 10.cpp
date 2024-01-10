#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int unit,n;
	
	struct person{
		string name;
		int unit;
		float bill,amount,temp,charge;
	};
	
	cout << "Enter Number Of Records : ";
	cin >> n;
	
	struct person p[n];
	
	for(int i=0;i<n;i++)
	{
		cout << "Enter Name : ";
		cin >> p[i].name;
		cout << endl;
		cout << "Enter Units : ";
		cin >> p[i].unit;
		cout << endl;
		
		if(p[i].unit <= 100)
		{
			if(p[i].unit < 84)
			{
				cout << "Bill Of Person "<< i + 1 <<"  :  50Rs." << endl << endl;
				p[i].amount = 50;
				continue;
			}
			p[i].amount = p[i].unit * 0.6;
		}
		else if(unit <= 300)
		{
			p[i].temp = 100 * 0.6;
			p[i].amount += p[i].temp;
			p[i].temp = (p[i].unit - 100) * 0.8;
			p[i].amount += p[i].temp;
		}
		else{
			p[i].temp = 100 * 0.6;
			p[i].amount += p[i].temp;
			p[i].temp = 200 * 0.8;
			p[i].amount += p[i].temp;
			p[i].temp = (p[i].unit - 300) * 0.9;
			p[i].amount += p[i].temp;
		}
		if(p[i].amount > 300)
		{
			p[i].amount = p[i].amount + (p[i].amount * 0.15);
		}
		cout << "Bill Of Person "<< i + 1 <<"  :  " << p[i].amount << " Rs." << endl << endl << endl;
	}
	
	
	cout << "Person " << setw(10) << "Name" <<setw(12) << "Units" << setw(11) << "Bill" << endl;
	
	for(int i=0;i<n;i++)
	{
		cout << "Person " << i+1 << setw(10) << p[i].name << setw(10) << p[i].unit << setw(10) << p[i].amount << "Rs." << endl;
	}
}
