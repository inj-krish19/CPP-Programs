#include<iostream>
#include<string.h>
//#include<cstring>
using namespace std;

class String{
	private :
		int length;
		char str[50];
	public :
		String();
		
		String operator ==(String temp)
		{		
			if( strcmp(str,temp.str) == false)
			{
				cout << endl << "String Are Same" << endl;
			}
			else
			{
				cout << endl << "String Are Not Same" << endl;
			}
		}
		
		String operator <=(String &temp)
		{
			int i;
			for(i=0;str[i] != '\0';i++){}
			length = i;
			
			for(i=0;temp.str[i] != '\0';i++){}
			temp.length = i;
			
			if( length < temp.length)
			{
				cout << endl << "First String Is Smaller In Size " << endl << endl;
			}
			else if( length == temp.length)
			{
				cout << endl << "Both Have Same String Size " << endl << endl; 
			}
			else{
				cout << endl << "Second String Is Smaller In Size " << endl << endl;
			}
		}
		
		String operator =(String temp)
		{		
			strcpy(str,temp.str);
			cout << endl << "Strings Copied Successfully " << endl << endl;
		}
		
		String operator [](int pos)
		{		
			cout << endl << "Position " << pos << " Of String Is " << str[pos] << endl << endl;
		}
		
		friend ostream &operator <<(ostream &output,String &temp)
		{
			cout << temp.str;
		}
		
};

String :: String()
{
	cout << "Enter A String : ";
	cin >> str;
	cout << endl;
}

int main()
{
	int pos;
	char ch;
	String S1,S2;
		
	S1 == S2;

	S1 <= S2;

	cout << endl << "Do You Want To Copy Both Strings ( Y / N ) : " ;
	cin >> ch;
	
	if(ch == 'y' || ch == 'Y')
	{	S1 = S2;	}
	
	cout << "String 1 : " << S1 << endl;
	cout << "String 2 : " << S2 << endl << endl;
	
	cout << "Enter Position To Extract Character From String 1 : ";
	cin >> pos;
	S1[ pos - 1];
	
	cout << "Enter Position To Extract Character From String 2 : ";
	cin >> pos;
	S2[ pos - 1];
}
