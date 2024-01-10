#include<iostream>
using namespace std;
int main()
{
	float fah,cel;
	cout << "Enter Fahrenhit : ";
	cin >> fah;
	
	cel = ((fah - 32) /( 1.8));
	
	cout << "Celsius Of Fahrenhit is .." << cel;
}
