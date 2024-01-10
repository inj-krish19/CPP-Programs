#include<iostream>
#include<cstring>
#include<fstream>
using namespace std;

class Person{
		static int count;
		int age;
		string name,gen;
		
	public :
		
		void GetData(){
			
			cout << "Enter Age Of Person " << count << " : ";
			cin >> age;
			cout << "Enter Name Of Person " << count << " : ";
			cin >> name;
			cout << "Enter Gender Of Person " << count << " : ";
			cin >> gen;

			
		}
		
	
		void printInFile(){
			
			ofstream file;
			
			file.open("sample.txt",ios :: app | ios :: out);
			
			file << "Person " << count << " : " << endl;
			file <<	age << endl;
			file <<	gen << endl;
			file <<	name << endl << endl;
	
			cout << endl << endl;
							
			count ++;

		}
		
};
	
int Person :: count = 1;

int main(){
	
	Person P[5];
	
	for(int i=0;i<2;i++){
		
		P[i].GetData();
		P[i].printInFile();
	
	}

}
