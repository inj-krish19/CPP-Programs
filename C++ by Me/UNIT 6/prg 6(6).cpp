#include<iostream>
//#include<iomanip>
using namespace std;

int main()
{
	int i,n;
	
	cout << "Enter Number of Players : ";
	cin >> n;
	
	struct player{
		int runs,inns,not_out;
		float av;
	};
	
	struct player s[n];
	
//	int runs[n],inns[n],not_out[n];
	
	for(i=0;i<n;i++)
	{
		cout << "\n\n\nPlayer " << i+1 << endl << endl;
		cout << "Enter Total Runs Of Player " << i+1 <<" :\t\t";
		cin >> s[i].runs;
		cout << endl;
		cout << "Enter Total Inning of Player " << i+1 <<" :\t";
		cin >> s[i].inns;
		cout << endl;
		cout << "Enter Total Not Out Of Player " << i+1 <<" :\t";
		cin >> s[i].not_out;
		cout << endl;
		
		if(s[i].inns - s[i].not_out != 0)
			s[i].av = s[i].runs / (s[i].inns - s[i].not_out);
		else
			s[i].av = s[i].runs / 1;
		
	}
	
	
	for(i=0;i<n;i++)
	{
		cout << "Player " << i+1 << endl << endl;
		cout << "Total Runs Of Player " << i+1 << " is \t"<< s[i].runs << endl;
		cout << "Total Inning of Player " << i+1 << " is \t" <<  s[i].inns << endl;
		cout << "Total Not Out Of Player " << i+1 << " is \t" << s[i].not_out << endl;
		cout << "Average Of Player " << i+1 << " is \t" << s[i].av << endl;
	}
}
