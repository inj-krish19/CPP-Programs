#include<iostream>
#define max(a,b,c)	((a > b) ? (a > c) ? a :  c : (b > c) ? b : c) 
using namespace std;
int main()
{
	int number1,number2,number3;
	number1 = 5;
	number2 = 10;
	number3 = 15;
	
	cout << "Enter Three Number : " << endl;
	cin >> number1;
	cin >> number2;
	cin >> number3;
	
	cout << "Maximum Number Is (Done Using Macro) : " << max(number1,number2,number3);
}
