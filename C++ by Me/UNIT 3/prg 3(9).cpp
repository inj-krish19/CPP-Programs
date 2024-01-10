#include<iostream>
using namespace std;
void display(int *p,int row=3,int col=3)
{
	int i,j,arr[5][5];
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			cout << *((p+j)+(col*i)) << "\t";
		}
		cout << endl;
	}
}
int main()
{
	int m,n,i,j;
	cout << "Enter Rows for Matrix \t\t: ";
	cin >> m;
	cout << endl;
	cout << "Enter Columns for Matrix  \t: ";
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
	display(ary[0],m,n);
}
