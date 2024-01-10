#include<iostream>
using namespace std;
//class XYZ;

struct XYZ{
		static int count;
		int id;
		string name;
		float age;
		void putData(void);
	public :
		void getData(void);
};

void XYZ :: getData(void){
	
	cout << "Enter Id : ";
	cin >> id;
	cout << endl;
	cout << "Enter Name : ";
	cin >> name;
	cout << endl;
	cout << "Enter Age : ";
	cin >> age;
	cout << endl;
	
	putData();
	
}
void XYZ :: putData(void){
	
	cout << "Data " << count << " Is .." << endl << endl;
	
	cout << "Id : "<< id << endl;
	cout << "Name : " << name << endl;
	cout << "Age : " << age << endl << endl << endl;
	count ++;
	
}

int XYZ :: count = 1;

int main()
{
	XYZ a,b,c;

	a.getData();
//	a.putData();
	b.getData();
//	b.putData();

}
