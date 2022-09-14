#include<iostream>
using namespace std;
class student
{
	int roll,marks;
	public:
	student(int x,int y)
	{
		roll=x;
		marks=y;
	}
	void display()
	{
		cout<<"roll"<<roll<<"\nmarks"<<marks<<"\n";
	}
};
int main()
{
	student s1(10,57);
	student s2(5,88);
	s1.display();
	s2.display();
	return 0;
}
	
		      