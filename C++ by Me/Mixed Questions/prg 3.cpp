#include<iostream>
using namespace std;

int i,j,w,x,y,z;

class MAT{
		int row,col;
		int ary[1][1];
	public :
		MAT(){		}
		MAT(int m,int n)
		{
			row = m;
			col = n;
			ary[row][col];
			for(i=0;i<row;i++)
			{	
				for(j=0;j<col;j++)
				{
					cin >> ary[i][j];
				}
				cout << endl;
			}
			cout << endl << endl;
		}
		friend void check(MAT ,MAT );
		
		void operator +(MAT temp)
		{
			int arr[2][2];
			cout << endl << endl << "Addition : " << endl ;
			
			for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++)
				{
					 temp.ary[i][j] += ary[i][j];	
				}
				cout << endl;
			}
			for(i=0;i<2;i++)
			{	
				for(j=0;j<3;j++)
				{
					cout <<temp.ary[i][j] << "		";
				}
				cout << endl;
			}
			
			cout << endl << endl;
		}
		
		/*void operator -(MAT temp)
		{
			cout << endl << endl << "Substraction"<< endl ;
			
			for(i=0;i<row;i++)
			{	for(j=0;j<col;j++)
				{
					temp.ary[i][j] -= ary[i][j];
				}
				cout << endl;
			}
			
			cout << endl << endl;
		}
		
		void operator *(MAT temp)
		{
			cout << endl << endl <<  "Multiplication"<< endl ;
			
			for(i=0;i<row;i++)
			{	for(j=0;j<col;j++)
				{
					temp.ary[i][j] *= ary[j][i];
				}
				cout << endl;
			}
			
			cout << endl << endl;
		}*/
};

void check(int a,int b,int c,int d)
{
	if(a == c && b == d)
	{
		
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
	MAT obj1(w,x);
	
	cout << "Enter Rows For Matrix 2 : ";
	cin >> y;
	cout << endl;
	cout << "Enter Colums For Matrix 2 : ";
	cin >> z;
	
	check(w,x,y,z);
	
	cout << endl << endl;
	MAT obj2(y,z);
		
	obj1 + obj2;
//	obj1 - obj2;
//	obj1 * obj2;
	
}
