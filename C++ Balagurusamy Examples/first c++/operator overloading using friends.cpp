#include<iostream>
using namespace std;

//const int size=3;
class vector
{
	int v[3];
	public:
		vector();
		vector(int *x);
		friend vector operator*(int a, vector b);
		friend vector operator*(vector b,int a);
		friend istream & operator >>(istream &, vector &);
		friend ostream & operator <<(ostream &, vector &);
};

vector :: vector()
{
	for(int i=0;i<3;i++)
		v[i]=0;
}

vector :: vector(int *x)
{
	for(int i=0;i<3;i++)
		v[i] = x[i];
}

vector operator *(int a,vector b)
{
	vector c;
	for(int i=0;i<3;i++)
		c.v[i] = a*b.v[i];
	return c;
}

vector operator *(vector b,int a)
{
	vector c;
	for(int i=0;i<3;i++)
		c.v[i] = b.v[i] * a;
	return c;
}

istream & operator >> (istream &din, vector &b)
{
	for(int i=0;i<3;i++)
	{
		cout<<"\nEnter element : ";
		din >> b.v[i];
	}
	return(din);
}
ostream & operator << (ostream &dout, vector &b)
{
	dout<<"\n\nElements of Vector are : (";
	for(int i=0;i<3;i++)
		dout <<b.v[i]<<" ";
	dout<<")";
	return (dout);
 } 
 
 int x[3]={2,4,6};
 int main()
 {
 	vector m; //first constructor
 	vector n=x;  //second constructor
 	
 	cout<<"Enter lements of vector m ";
 	cin >> m;  //invokes operator >>() function
 	
 	cout<<endl;
 	cout<<"m = "<<m<<endl;
 	
 	vector p,q;
 	p = 2*m;   //invokes friend 1;
 	q= n*2; // invokes friend 2;
 	cout<<"\n";
 	
 	cout<<"p = "<<p<<endl;
 	cout<<"q = "<<q<<endl;
 	
 	return(0);
 	
 }
