#include<iostream>
#include<string.h>
using namespace std;

class user{
	char uname[10];
	char pass[20];
		public :
			void getdata(void);
			int verify();
};

void user::getdata(){
	cout << "Enter User Name : ";
	cin >> uname;
	cout << endl;
	cout << "Enter Password : ";
	cin >> pass;
	cout << endl;
}
int user::verify(){
//	cout << "This Is For Verifying THat You Are Malik" << endl;
	if(strcmp(uname,"KRISH") == 0 || strcmp(uname,"VISHAL") == 0)
	{
		if(strcmp(pass,"I_AM_MALIK") == 0)
		{
			return 1;
		}
		else{
			return 0;
		}
	}
	else{
		return 0;
	}
}

int main()
{
	int result;
	user malik;	
	malik.getdata();
	result = malik.verify();
	if(result == 0)
	{
		cout << "You Are Not Malik" << endl;
	}
	else{
		cout << "You Are Malik . Welcome !" << endl ;
	}
	return 0;
}
