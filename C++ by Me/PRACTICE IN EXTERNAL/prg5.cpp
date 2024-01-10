#include<iostream>
using namespace std;

class Person{
	protected:
		int id;
		string name;
	public :
		virtual void show() = 0;
};

class Faculty;

class Student : virtual public Person{

	private : 	
		static int Scount;
		int marks[5];
		
	protected : 
	public :
		
		Student(){}
		
		Student(string temp){
			
			id = Scount;
			name = temp;
			for(int i=0;i<5;i++){
				marks[i] = 0;
			}
		
			Scount ++;
			setMarks();
			show();
		
		}
		
		void setMarks(){
			
			for(int i=0;i<5;i++){
				cout << "Enter Marks Of Subject " << i+1 << " : ";
				cin >> marks[i];
				cout << endl; 
			}
			
		}
		
		void show(){
			
			cout << endl 
				 << "Id : " 	<< id	<< endl
				 << "Name : " 	<< name	<< endl;
				 
			for(int i=0;i<5;i++){
				cout << "Subject " << i+1 << " : " << marks[i] << endl; 
			}
		
			cout << endl;
		
		}	
		
		void friend paperChecking(Student , Faculty );
			
		~Student(){
			cout << "Student " << id << " 's Object Destroyed " << endl << endl;
		}
	
};

class Faculty : virtual public Person{
	
	private : 		
		static int Fcount;
	protected : 
	public :
		
		Faculty(){}
		
		Faculty(string temp){
			
			id = Fcount;
			name = temp;
			
			Fcount ++;
			show();
		
		}
		
		void show(){
			
			cout << endl 
				 << "Id : " 	<< id	<< endl
				 << "Name : " 	<< name	<< endl;
				
			cout << endl;
		
		}	
		
		void friend paperChecking(Student , Faculty );
		
		~Faculty(){
			cout << "Faculty " << id << " 's Object Destroyed " << endl << endl;
		}
	
};

int Student :: Scount = 1;
int Faculty :: Fcount = 1;

void paperChecking(Student S,Faculty F){
	cout << S.name << " 's Paper Checked By " << F.name << " Sir" << endl;
}


int main(){
	
	int studentC,facultyC,counter;
	studentC = facultyC = counter = 0;
	Person *P[5];
	
	Student *S[5];
	Faculty *F[5];
	
	char c;
	string tempName;
	
	do{
		
		cout << endl << endl;
		cout << "Enter Charachter For Choice : ";
		cin >> c;
		
		if(c == 'f' || c == 'F' ){
			
			cout << "\nEnter Name Of Faculty : ";
			cin >> tempName;
			
			P[counter] = F[facultyC] = new Faculty(tempName);
			facultyC ++;
			counter ++;
			
		}else if(c == 's' || c == 'S' ){
			
			cout << "\nEnter Name Of Student : ";
			cin >> tempName;
						
			P[counter] = S[studentC] = new Student(tempName);
			studentC ++;
			counter ++;
			
		}else{
			cout << "\nInvalid Choice\n";
		}
			
	}while( c == 'f' || c == 'F' || c == 's' || c == 'S');
	
	for(int i=0;i<5;i++){
		P[i]->show();
	}
	
	
}
