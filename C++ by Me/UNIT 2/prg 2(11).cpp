#include<iostream>
using namespace std;

int main()
{
	int number1,number2;
	cout << "Enter First Numbers :" ;
	cin >> number1;
	cout << endl;
	cout << "Enter First Numbers :" ;
	cin >> number2;
	cout << endl;
	if(number1 > number2)
	{	
		cout << "Larger Value Is .. " << number1;
	}
	else
	{	
		cout << "Larger Value Is .. " << number2;
	}
}
