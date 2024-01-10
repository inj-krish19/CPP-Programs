#include<iostream>
using namespace std;

int main()
{
	int i,j,n=10,count[6]={0,0,0,0,0,0},total=0;
	int ary[n],spoilts;
	
	cout << "Enter Number For Voting (In 1 to 5) :";
	
	for(i=0;i<n;i++)
	{
	//	cout << "Enter Number For Voting (In 1 to 5) :";
		cout << "\nYou Are Person " << i+1 << " : ";
		cin >> ary[i];		
	}
	
	for(i=0;i<n;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(j == ary[i])
			{
				count[j-1] ++;
				total ++;
			}
		}			
	}
	
	for(i=0;i<5;i++)
	{
		cout << "\nCandidate " << i+1 << " 's Ballotss Are " << count[i];
	}	
	
	spoilts = n - total;
	
	cout << "\nSpoilts Ballots are " << spoilts;
	
}
