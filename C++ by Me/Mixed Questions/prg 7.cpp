#include<iostream>
using namespace std;

powerfun(double power,double number,int n=2)
{
	for(int i=0;i<n;i++)
	{
		power = power * number;
	}
	cout << " Is " << power;
}

int main()
{
	double number;
	int times;

	cout << "Enter Number For Getting Power : ";
	cin >> number;
	cout << endl << endl ;
	cout << "Enter Number For Power : ";
	cin >> times;
	cout << endl << endl ;
	
	cout << "Power " << times << " Of Number " << number; 
	
	powerfun(number,number,times-1);
}

