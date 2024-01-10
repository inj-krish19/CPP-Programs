#include<iostream>
using namespace std;

enum data{
	circle,
	square,
	triangle,
	rectangle
};
float area(float);
float area(int);
float area(int,int);
float area(float,float);

int main()
{
	int choice;
	cout << "Enter Choice : ";
	cin >> choice;
	cout << endl;
	
	switch(choice)
	{
		case circle :
			{
				float r;
				cout << "Enter Radius : ";
				cin >> r;
				cout << endl;
				cout << "The Area Of Circle Is : " << area(r) << endl;
				break;
			}
			
		case square :
			{
				int side;
				cout << "Enter Side of a Square : ";
				cin >> side;
				cout << endl;
				cout << "The Area Of Square Is : " << area(side) << endl;
				break;
			}	
			
		case triangle :
			{
				int base,height;
				cout << "Enter Base : ";
				cin >> base;
				cout << endl;
				cout << "Enter Height : ";
				cin >> height;
				cout << endl;
				cout << "The Area Of Triangle Is : " << area(base,height) << endl;
				break;
			}	
				
		case rectangle :
			{
				float l,b;
				cout << "Enter Lenght : ";
				cin >> l;
				cout << endl;
				cout << "Enter Base : ";
				cin >> b;
				cout << endl;
				cout << "The Area Of Rectangle Is : " << area(l,b) << endl;
				break;
			}
		default : 
			{
				cout << "Invalid Choice !! " << endl;
			}
	}
}

float area(float a)
{		return(3.14*a*a);		}
float area(int a)
{		return(a*a);			}
float area(int a,int b)
{		return(0.5*a*b);		}
float area(float a,float b)
{		return(a*b);			}
