#include<iostream>
using namespace std;

namespace includeClasses{
	
		class Student;
		class Faculty;
		
		class Student{
			
			private : 	
				
				int id;
				static int count;
				string name;
				int marks[5];
				
			protected : 
			public :
				
				Student(){}
				
				Student(string temp){
					
					id = count;
					name = temp;
					for(int i=0;i<5;i++){
						marks[i] = 0;
					}
				
					count ++;
//					setMarks();
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
//				
//				~Student(){
//					cout << "Student " << id << " 's Object Destroyed " << endl << endl;
//				}
			
		};
	
		class Faculty{
			
			private : 	
				
				int id;
				static int count;
				string name;
				
			protected : 
			public :
				
				Faculty(){}
				
				Faculty(string temp){
					
					id = count;
					name = temp;
					
					count ++;
					show();
				
				}
				
				void show(){
					
					cout << endl 
						 << "Id : " 	<< id	<< endl
						 << "Name : " 	<< name	<< endl;
						
					cout << endl;
				
				}	
				
				void friend paperChecking(Student , Faculty );
//				
//				~Faculty(){
//					cout << "Faculty " << id << " 's Object Destroyed " << endl << endl;
//				}
			
		};
	
	
		void paperChecking(Student S,Faculty F){
			cout << S.name << " 's Paper Checked By " << F.name << " Sir" << endl;
		}

}

using namespace includeClasses;

int Student :: count = 1;
int Faculty :: count = 1;

int main(){
		
	Student S[3];
	
	S[0] = Student("VISHAL");
	S[1] = Student("KRISH");
	S[2] = Student("MOHIT");
		
	Faculty F[2];
	
	F[0] = Faculty("ROBERT");
	F[1] = Faculty("CHIRAG");
		
	for(int i=0;i<3;i++){
		for(int j=0;j<2;j++){
			paperChecking(S[i],F[j]);
		}
	}
			
}
