#include<iostream>
using namespace std;

template <typename t,int size>
class array
{
	t a[size];
	
	public:
		void insert()
		{
			cout<<"\nAccepting values in array : \n";
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
		void sort()
		{
			for (int i = 0; i < size - 1; i++)
				for (int j = size - 1; i < j; j--)
					if (a[j] < a[j - 1])
						swap(a[j], a[j - 1]);
		}
};
main()
{
	array<int,6> arr;
	arr.insert() ;
	arr.display();
	arr.sort() ;
	arr.display() ;
	
	array<float,4> ft_arr;
	ft_arr.insert() ;
	ft_arr.display();
	
	
	array<char,5> ch_arr;
	ch_arr.insert() ;
	ch_arr.display();
	ch_arr.sort() ;
	ch_arr.display() ;
	

}

