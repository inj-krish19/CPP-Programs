#include<iostream>
using namespace std;

int main()
{
	int i,j,n;
	cout << "Enter Number To End Pattern : ";
	cin >> n;
	cout << endl;
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout << i;
		}
		cout << endl;
	}
}
