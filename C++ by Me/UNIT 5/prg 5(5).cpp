
//	DM
//	Meters & Centimeters

//	DB
//	Foot & Inches

// 1 foot 12 inches 
// 1 meter 100 cm
// 1 inch 2.54 ~ 2.5 cm
// 1 foot 30.48 ~ 30.5 cm
// 1 meter 39.37 ~ 40inch
// 1 mete 3.28 ~ 3.3foot
// 1 foot 0.3048 ~ 0.3 meter

#include<iostream>
using namespace std;

class DM;
class DB;

class DM{
		float meter;
		float cms;
		void Display(void);
	public :
		void getData(void);
		friend add(DM ,DB);
};

class DB{
		float foot;
		float inch;
		void Display(void);
	public :
		void getData(void);
		friend add(DM ,DB);
};

void DM :: getData(void){
	cout << "Enter Meters For Calculation : ";
	cin >> meter;
	cout << endl;
	cout << "Enter Centimeters For Calculation : ";
	cin >> cms;
	cout << endl;
	Display();
}

void DB :: getData(void){
	cout << endl << endl;
	cout << "Enter Foots For Calculation : ";
	cin >> foot;
	cout << endl;
	cout << "Enter Inches For Calculation : ";
	cin >> inch;
	cout << endl;
	Display();
}

void DM::Display(){
	cout << endl << endl;
	cout << "Meters Are "		<< meter << endl;
	cout << "Centimeters Are " 	<< cms	 << endl;
}

void DB::Display(){
	cout  << endl << endl;
	cout << "Foots Are " <<  foot << endl;
	cout << "Inches Are " << inch << endl;
}

int add(DM obj,DB object){
	int choice;
	double para1,para2;
	
	cout 	<< endl << endl
			<< "1 For Meter And Centimeters " 	<< endl
			<< "2 For Foot And Inches" 			<< endl
			<< endl << endl;

	cout << endl << "Enter Choice : ";
	cin >> choice;

	if(choice == 1){
		para1 = obj.meter 	+ (0.3048 * object.foot);
		para2 = obj.cms 	+ (2.5400 * object.inch);
		
		cout 	<< "Meters Are " 		<< para1 << endl
				<< "Centimeters Are  "	<< para2 << endl;
		
	}
	else if(choice == 2){
		para1 = (3.2808 * obj.meter) 	+ object.foot;
		para2 = (0.3937 * obj.cms) 		+ object.inch;
		
		cout 	<< "Foots Are " 	<< para1 << endl
				<< "Inches Are "	<< para2 << endl;
		
	}
	else{
		cout << endl << "Please Enter Appropriate Number";
		add(obj,object);
	}

}

int main()
{
	DM small;
	DB big;
	
	small.getData();
	big.getData();
	
	add(small,big);
	
}
