#include<iostream>
using namespace std;

class vector;
class vector{
		int size;
		int arr[99];
	public : 
		void creation(void);
		void modify(void);
		void scale(void);
		void display(void);
};

void vector :: creation(void)
{
	int i;
	cout << "Enter Size : ";
	cin >> size;
	cout << endl << endl;
	for(i=0;i<size ;i++)
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
//		if(i != 2)
			cout << arr[i];
		if(i != size - 1)
		{
			cout << " , ";	
		} 
	}
	cout << " )";
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

int main()
{
	char ch;
	vector v;
	v.creation();
	do{
		
		cout << endl << endl
			 << "M for Modifying Vector" 	<< endl
			 << "S for Scaling Vector" 		<< endl
			 << "D for Displaying Vector "	<< endl
			 << "E for Exit";
			 
		cout << endl << endl << "Enter Choice : ";
		cin >> ch;
		
		switch(ch)
		{
			case 'm' :
			case 'M' :
						v.modify();
						break;
						
			case 's' :
			case 'S' :
						v.scale();
						break;
			
			case 'd' :
			case 'D' :
						v.display();
						break;
						
			case 'e' :	
			case 'E' : 
						cout << "Exited" << endl << endl ;
						exit(0);
						break;
				
			default : 
						cout << "Invalid Choice" << endl << endl;	
		}
			
	}while(ch != 'e'|| ch != 'E');
}
