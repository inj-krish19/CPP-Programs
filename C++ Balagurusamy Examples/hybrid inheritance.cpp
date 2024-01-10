#include<iostream>
using namespace std;
class student
{
	protected: int roll_no;;
	public:
		set_number(int a)
		{
			roll_no = a;
		}
		display_number()
		{
			cout<<"\nRoll_number is  : "<<roll_no;
		}
};
class test:public student
{
	protected: float part1,part2;
	public:
		void set_marks(float x, float y)
		{
			part1=x;
			part2 = y;
		}
		display_marks()
		{
			cout<<"\nMarks obtained : "<<part1<<"  "<<part2;
		}
};
class sports
{
	protected: float score;
	public:
		void set_score(float s)
		{
			score = s;
		}
		void get_score()
		{
			cout<<"\nscore is : "<<score;
		}
};
class result:public test,public sports
{
	float total;
	public:
		void display()
		{
			total = part1+part2+score;
			cout<<"\nFrom Derived class : "<<part1<<" "<<part2<<" "<<score<<endl<<total;
		}
};
main()
{
	result r1;
	r1.set_number(101);
	r1.set_marks(95,98);
	r1.set_score(10);
	r1.display();
}
