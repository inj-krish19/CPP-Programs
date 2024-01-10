#include<iostream>
using namespace std;

int s=0;

class Vector{
		int size;
		int arr[10];

	public :
		
		void operator +(int num)
		{
			for(int i=0;i<size;i++)
			{
				arr[i] += num;
			}
		}
		
		void operator -(int num)
		{
			for(int i=0;i<size;i++)
			{
				arr[i] -= num;
			}
		}
		
		void operator *(int num)
		{
			for(int i=0;i<size;i++)
			{
				arr[i] *= num;
			}
		}
		
		void operator /(int num)
		{
			for(int i=0;i<size;i++)
			{
				arr[i] /= num;
			}
		}
		
		void operator [](int i)
		{
			cout << endl << "Element " << i+1 << " : " << arr[i] << endl;
		}
	
		Vector()
		{
			cout << "Vector Created Successfully " << endl << endl;
		}
	
		~ Vector()
		{
			cout << endl << "Vector Destructed Successfully " << endl;
		}
	
		friend istream &operator >>(istream &input,Vector &A)
		{
			cout << "Enter Size Of Vector : ";			
			cin >> A.size;
			s = A.size;
			
			cout << endl << "Size Of Vector Is " << A.size << endl << endl;
			
			for(int i=0;i<A.size;i++)
			{
				cout << "Element " << i+1 << " : ";			
				cin >> A.arr[i];
				cout << endl;
			}
		}
	
		friend ostream &operator <<(ostream &output,Vector &A)
		{
			cout << endl << "(";
			for(int i=0;i<A.size;i++)
			{
				output<< A.arr[i];
				if(i != A.size - 1)
					cout << ",";
			}
			cout << ")" << endl;
		}
		
};

int main()
{
	int number;
	Vector V;
	
	cin >> V;
	cout << V;
	
	cout << endl << "Enter Number For Addition With Vector : ";
	cin >> number;
	
	V + number;
	cout << V;
		
	cout << endl << "Enter Number For Subtraction With Vector : ";
	cin >> number;
	
	V - number;
	cout << V;	
		
	cout << endl << "Enter Number For Multiplication With Vector : ";
	cin >> number;
	
	V * number;
	cout << V;
	
	cout << endl << "Enter Number For Divison With Vector : ";
	cin >> number;
	
	V / number;
	cout << V;
	
valid:
	
	cout << endl << "Enter Number To Watch Element : ";
	cin >> number;
	
	if(number > s)
	{
		cout << endl << "Invalid Data Access " << endl;
		goto valid;
	}
	else{		V[number - 1];		}
	
	return 0;
}
