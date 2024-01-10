#include<iostream>
using namespace std;

class vector;
class vector{
		int size;
		int arr[99];
	public : 
		void creation(int);
		friend addition(vector ,vector );
		void modify(void);
		void scale(void);
		void display(void);
};

void vector :: creation(int s)
{
	int i;
	size = s;
//	cout << endl << "Enter Size : ";
//	cin >> size;
	cout << endl << endl;
	for(i=0;i<size;i++)
	{
		cout << "Element " << i << " : ";
		cin >> arr[i];
		cout << endl;
	}
	display();
}

void vector :: display(void)
{
	cout << "( ";
	for(int i=0;i<size;i++)
	{
		cout << arr[i];
		if(i != size - 1)
		{
			cout << " , ";	
		} 
	}
	cout << " )" << endl;
}

void vector :: modify(void)
{
	int pos;
	
	reenter :
	cout << "Enter Position To Modify Vector : ";
	cin >> pos;
	cout << endl;
	if(pos > size || pos < 0)
	{
		cout << "Invalid Choice" << endl << endl;
		goto reenter;
	}
	else{
		cout << "Enter Value To Change Element " << pos << " : ";
		cin >> arr[pos-1];
	}
	display();
}

void vector :: scale(void)
{
	int scaler;
	cout << "Enter Value To Scale Vector : ";
	cin >> scaler;
	
	for(int i=0;i<size;i++)
	{
		arr[i] *= scaler;
	}
	display();
}

addition(vector a,vector b)
{
	vector result;
	for(int i=0;i<a.size;i++)
	{
		result.arr[i] = b.arr[i] + a.arr[i];
	}
	
	cout << "( ";
	for(int i=0;i<a.size;i++)
	{
		cout << result.arr[i];
		if(i != a.size - 1)
		{
			cout << " , ";	
		} 
	}
	cout << " )" << endl;
}

int main()
{
	char ch;
	int i=0,size,s;
	vector v[2];
	
	
	cout << endl << "Enter Size of Vector 1: ";
	cin >> size;
	
	v[0].creation(size);
	
	reenter:
	cout << endl << "Enter Size of Vector 2: ";
	cin >> s;
	
	if(size != s)
	{
		cout << endl << "Both Size Should Be Same" << endl ;
		goto reenter;
	}
	else{
		v[1].creation(s);
	}
	
	do{
		
		cout << endl << endl
			 << "M for Modifying Vector" 	<< endl
			 << "S for Scaling Vector" 		<< endl
			 << "D for Displaying Vector "	<< endl
			 << "A for Adding Both Vector "	<< endl
			 << "E for Exit";
			 
		cout << endl << endl << "Enter Choice : ";
		cin >> ch;
		
		if(ch != 'a' && ch != 'A')
		{	
			cout << endl << endl << "Enter Choice For Changes On Which Vector [0 or 1]: ";
			cin >> i;
		}

		switch(ch)
		{
			case 'm' :
			case 'M' :
						v[i].modify();
						break;
						
			case 's' :
			case 'S' :
						v[i].scale();
						break;
			
			case 'd' :
			case 'D' :
						v[i].display();
						break;
				
			case 'a' :	
			case 'A' : 
						addition(v[0],v[1]);
						break;		
			case 'e' :	
			case 'E' : 
						cout << "Exited" << endl << endl ;
						exit(0);
						break;
				
			default : 
						cout << "Invalid Choice" << endl << endl;	
		}
			
	}while(ch != 'e' || ch != 'E');
}
