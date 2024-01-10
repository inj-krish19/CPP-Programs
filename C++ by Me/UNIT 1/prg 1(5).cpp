#include<iostream>
using namespace std;
int main()
{
	int m,n,i,j;
	cout << "Enter Rows for Matrix : ";
	cin >> m;
	cout << "Enter Columns for Matrix : ";
	cin >> n;
	cout << endl << endl;
	int ary[m][n];
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cout << "ary[" << i << "][" << j << "] : ";
			cin >> ary[i][j];
			cout << endl;
		}
	}
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cout << ary[i][j] << "\t";
		}
		cout << endl;
	}
}
