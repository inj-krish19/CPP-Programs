#include<iostream>
#define data 10

using namespace std;

class BankAccount;

class BankAccount{
		string name;
		string acn;
		string act;
		double balance;
		double transaction;
	public :
		void getData(int);
		void deposit(void);
		void withdraw(void);
		void display(void);
};

void BankAccount :: getData(int n)
{
	cout << endl << "Employee Record " << n << endl <<endl;
	
	cout << "Enter Account Holder Name : ";
	cin >> name;
	cout << "Enter Account Number : ";
	cin >> acn;
	cout << "Enter Account Type : ";
	cin >> act;
	
	reenter :
	
		cout << "Enter Account Balance : ";
		cin >> balance;
		if(balance < 0 )
		{
			cout << "Inappropriate Data" << endl << endl;
			goto reenter;
		}	
	
	cout << endl << endl;
}

void BankAccount :: deposit(void)
{
	cout << "Enter Amount to Deposit : ";
	cin >> transaction;
	if(transaction < 0)
	{
		cout << "Inappropriate Data" << endl << endl;
		deposit();
	}
	else{
		balance += transaction;
		cout << "Now Your Account Balance Is " << balance;
	}
	
	cout << endl << endl;
}

void BankAccount :: withdraw(void)
{
	cout << "Enter Amount to Withdraw : ";
	cin >> transaction;
	if(transaction > balance)
	{
		cout << "You Can't Withdraw All Amount" << endl << endl;
		withdraw();
	}
	else if(transaction < 0)
	{
		cout << "Inappropriate Data" <<  endl << endl;
		withdraw();
	}
	else{
		balance -= transaction;
		cout << "Now Your Account Balance Is " << balance;
	}
		
	cout << endl << endl;
}

void BankAccount :: display(void)
{
	cout << "Account Holder Name Is " 	<< name		<< endl;
	cout << "Account Number Is " 		<< acn		<< endl;
	cout << "Account Type Is " 			<< act		<< endl;
	cout << "Account Balance Is " 		<< balance	<< endl;
	
	cout << endl << endl;
}


int main()
{
	int i,limit=0,count = 1;
	char ch;
	BankAccount person[data];
	
	for(i=0;i<data;i++)
	{
		
		do{
	
			cout << "You Are In Employee " << i + 1;
		
			cout << endl << endl << endl
				 << "G for Entering Value" 		<< endl
				 << "D for Depositing Amount"	<< endl
				 << "W for Withdrawing Amount"	<< endl
				 << "S for Displaying Amount" 	<< endl
				 << "E for Exit For Employee "	<< i + 1;
				 
			cout << endl << endl << "Enter Choice : ";
			cin >> ch;
			
			switch(ch)
			{
				case 'g' : 
				case 'G' :	
							if(limit == 0)
							{
								person[i].getData(i+1);
								limit ++;	
							}
							else{
								cout << "Can't Re-enter Data" << endl << endl;	
							}
							break;
												
				case 'd' : 
				case 'D' :
							if(limit != 0)
							{
								person[i].deposit();
							}
							else{
								cout << "At First Enter Data" << endl << endl;	
							}
							break;
							
				case 'w' : 
				case 'W' :
							if(limit != 0)
							{
								person[i].withdraw();
							}
							else{
								cout << "At First Enter Data" << endl << endl;	
							}
							break;
					
				case 's' : 
				case 'S' :
							if(limit != 0)
							{
								person[i].display();
							}
							else{
								cout << "At First Enter Data" << endl << endl;	
							}
							break;
					
				case 'e' : 
				case 'E' :
							cout << "Exited Data Access" << endl << endl;
							break;
							
				default  :
					 		cout << "Invalid Value" << endl << endl;
					 		break;
			}
			
		}while(ch != 'e' && ch != 'E');
		limit = 0;
	}
	
	for(i=0;i<data;i++)
	{
		cout << endl << endl << "Record " 
			 << i+1 << endl << endl;
			 person[i].display();
	}
	
	
	
	return 0;
		
}
