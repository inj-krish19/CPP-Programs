#include<iostream>
using namespace std;

class data{
		int number1,number2;
	public : 
		int swap(int &,int &);
};

int data :: swap(int &number1,int &number2){
	number1 = number1 + number2;
	number2 = number1 - number2;
	number1 = number1 - number2;
	cout << "After Swaapping Data Is " << number1 << " and " << number2 << endl;
}

int main()
{
	data d;
	int a,b;
	
	cout << "Enter Number 1 : ";
	cin >> a;
	
	cout << "Enter Number 2 : ";
	cin >> b;
	
	d.swap(a,b);
}
