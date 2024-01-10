#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	
	char a,str[50];
	
	
	cin.getline(str,10);
	cout.write(str,5);
	
	cout << endl << endl;
	
	cin.get(a);
	cout.put(a);
	
	cout << endl << endl;
	
	/*	Using Functions                */
	
	float value = 9.999922;
	
	cout.width(5);
	cout.fill('*');
	cout << int(value);
	
	cout << endl << endl;
	
	cout.width(0);
	cout.precision(3);
	cout << value;
	
	cout << endl << endl;
	
	cout.setf(ios::left,ios::adjustfield);
	cout << value;
	cout << endl << endl;

	cout.setf(ios::right,ios::adjustfield);	
	cout << value;
	cout << endl << endl;
	
	cout.setf(ios::internal,ios::adjustfield);
	cout << value;
	cout << endl << endl;

	cout.setf(ios::scientific,ios::floatfield);	
	cout << value;
	cout << endl << endl;
	
	cout.setf(ios::fixed,ios::floatfield);
	cout << value;
	cout << endl << endl;

	cout.setf(ios::dec,ios::basefield);	
	cout << value;
	cout << endl << endl;
	
	cout.setf(ios::oct,ios::basefield);
	cout << value;
	cout << endl << endl;

	cout.setf(ios::hex,ios::basefield);	
	cout << value;
	cout << endl << endl;
	
	cout.unsetf(ios::hex);
	
	cout.setf(ios::showbase);	
	cout << value;
	cout << endl << endl;
	
	cout.setf(ios::showpos);	
	cout << value;
	cout << endl << endl;
	
	cout.setf(ios::showpoint);	
	cout << value;
	cout << endl << endl;
	
	cout.setf(ios::uppercase);	
	cout << value;
	cout << endl << endl;
	
//	cout.setf(ios::skipus);	
	cout << value;
	cout << endl << endl;
	
	cout.setf(ios::unitbuf);	
	cout << value;
	cout << endl << endl;
	
//	cout.setf(ios::stdio);	
	cout << value;
	cout << endl << endl;
	
	setw(5);
	setfill('*');
	setiosflags(ios::unitbuf);
	cout << int(value);
	
	cout << endl << endl;
	
	resetiosflags(ios::unitbuf);
	setw(0);
	setprecision(3);
	cout << value;	
	
}

//C:\ProgramData\Microsoft\Windows\Start Menu\Programs\Bloodshed Dev-C++
