
/*	CODE OF ADDING 2 TO 5 INTEGERS	*/

#include<iostream>
using namespace std;
int add(int a,int b)
{			return (a+b);			}
int add(int a,int b,int c)
{			return (a+b+c);			}
int add(int a,int b,int c,int d)
{			return (a+b+c+d);			}
int add(int a,int b,int c,int d,int e)
{			return (a+b+c+d+e);			}

int main()
{
	int i,n,ary[5];
	cout << "Enter Numbers of Addition You Want (in 2 to 5): " ;
	cin >> n; 
	cout << endl;
	if(n > 5 || n < 2)
	{
		cout << "Sorry Invalid Choice" << endl;
		return 0;
	}
	else
	{
		for(i=0;i<n;i++)
		{
			cout << "Number " << i+1 << " : ";
			cin >> ary[i]; 
			cout << endl;
		}
	
		for(i=0;i<n;i++)
		{
			cout << "Number " << i+1 << " : " << ary[i] << endl;
		}
	
		cout << endl << "Addition Of Numbers Are " ;
	
		if(n == 2)
			cout << add(ary[0],ary[1]);
		if(n == 3)
			cout << add(ary[0],ary[1],ary[2]);
		if(n == 4)
			cout << add(ary[0],ary[1],ary[2],ary[3]);
		if(n ==	5)
			cout << add(ary[0],ary[1],ary[2],ary[3],ary[4]);
	}
}
