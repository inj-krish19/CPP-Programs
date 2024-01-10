#include<iostream>
using namespace std;
int main()
{
	int year;
	cout << "Enter a Year : ";
	cin >> year;
	
	if(year % 400 == 0)
	{
		cout << year << " Is Leap Year" << endl;
	}
	else{
		if(year % 100 == 0)
		{
			cout << year << " Is Not Leap Year" << endl;
		}
		else if(year % 4 == 0){
			cout << year << " Is Leap Year" << endl;
		}
		else{
			cout  << year << " Is Not Leap Year" << endl;
		}
	}
	return 0;
}
