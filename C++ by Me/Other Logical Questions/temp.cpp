#include<iostream>
using namespace std;

int i,j,w,x,y,z;

class MAT{
		int row,col;
		int ary[1][1];
	public :
		setValue(int a,int b)
		{	row = a; col =b; }
		MAT(){		}
		MAT(int m,int n)
		{
			for(i=0;i<m;i++)
			{
				for(j=0;j<n;j++)
				{
					cout << &ary[j][i];	
				}
				cout << endl;
			}
			cout << endl;
			for(i=0;i<m;i++)
			{
				for(j=0;j<n;j++)
				{
					cout << &ary[i][j] << "	";	
				}
				cout << endl;
			}	
		}
		void operator +(MAT t)
		{
			cout << "Addition" << endl;
		}
		void operator -(MAT t)
		{
			cout << "Subtraction" << endl;
		}
		void operator *(MAT t)
		{
			cout << "Multiplication" << endl;
		}
};
void check(int a,int b,int c,int d,MAT &x,MAT &y)
{
	if(a == c && b == d)
	{
		MAT x(a,b);
		x + y;
		x - y;
		x * y;		
	}
	else{
		cout << endl << "Rows and Columns Are Not Same " << endl;
		exit(0);
	}
}

int main()
{
	cout << "Enter Rows For Matrix 1 : ";
	cin >> w;
	cout << endl;
	cout << "Enter Colums For Matrix 1 : ";
	cin >> x;
	cout << endl << endl;
	
	cout << "Enter Rows For Matrix 2 : ";
	cin >> y;
	cout << endl;
	cout << "Enter Colums For Matrix 2 : ";
	cin >> z;
	cout << endl << endl;
	
	MAT obj1,obj2;
	check(w,x,y,z,obj1,obj2);
}
