#include<iostream>
using namespace std;

template <typename t,int size>
class array
{
	t a[size];
	
	public:
		void insert()
		{
			cout<<"Accepting values in array : \n";
			for(int i=0;i<size;i++)
			{
				cout<<"\nEnter value : ";
				cin>>a[i];
			}
		}
		void display ()
		{
			for(int i=0;i<size;i++)
				cout<<"\n"<<a[i];
		}
};
main()
{
	array<int,6> arr;
	arr.insert() ;
	arr.display();
	
	array<float,4> ft_arr;
	ft_arr.insert() ;
	ft_arr.display();
	
	array<char,5> ch_arr;
	ch_arr.insert() ;
	ch_arr.display();
	

}

