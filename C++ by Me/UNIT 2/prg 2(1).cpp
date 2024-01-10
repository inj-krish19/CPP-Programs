#include<iostream>
#include<cstring>
using namespace std;

class String;
class String{
		char str[100];
	public:
		// a
		String(){	cout << endl << "Question A" << endl << endl;	}
		// b 
		String(char copy[100])
		{
			cout << endl << "Question B" << endl << endl;
			String(copy,10);
			cout << endl;
		}
		// c
		String(char first[100],char second[100])
		{
			char temp[200];
			int i;
			cout << endl << "Question C" << endl << endl;
			for(i=0;i<strlen(first);i++) {
				temp[i] = first[i];
			}
			temp[strlen(first)] = ' ';
			for(i = 1 + strlen(first);i<=( strlen(first) + strlen(second));i++) {
				temp[i] = second[i - strlen(first) - 1];
			}
			String(temp,10);
			cout << endl;
		}
		// d
		String(char str[200],int i)
		{
			if(i == 0)
			{
				cout << endl << "Question D" << endl << endl;
			}
			cout << str;
			cout << endl;
		}
};

int main(){
	String A();
	String B("Hello World");
	String C("Shah","Krish");
	String D("My Role Number Is 47",0);
}
