#include<iostream>
using namespace std;

int main()
{
	
	float a,b,c,x,y;
	cout << "TEST 1" << endl;
	
	a = 250;
	b = 85;
	c = 25;
	
	x = a / (b - c);
	
	cout << "A : " << a << "\tB : " << b << "\tC : " << c << "\tX : " << x << endl;
	
	cout << endl << "TEST 2" << endl;
	
	a = 300;
	b = 70;
	c = 70;

	x=0;
	x = a / (b - c);
	
	cout << "A : " << a << "\tB : " << b << "\tC : " << c << "\tX : " << x << endl;
	
	
	cout << "If You Want To Try You Can Try Here\n\nEnter Value of A :" ;
	cin >> a;
	cout << endl;
	cout << "Enter Value of B :" ;
	cin >> b;
	cout << endl;
	cout << "Enter Value of C :" ;
	cin >> c;
	cout << endl;
	
	x=0;
	x = a / (b - c);
	
	cout << "A : " << a << "\tB : " << b << "\tC : " << c << "\tX : " << x << endl;
}
