#include<iostream>
#include<conio.h>
using namespace std;

class angle{
	private:
		int degree;
		float minute;
		char direction;
	public:
		angle(){
			degree=0;
			minute=0;
			direction='E';
		}
		void set(int a,float b,char c)
		{
			degree=a;
			minute=b;
			if(c>60) c=c-32;
			direction=c;
		}
		int getdegree()
		{
			return degree;
		}
		float getminute()
		{
			return minute;
		}
		char getdir()
		{
			return direction;
		}
		void showdata()
		{
			cout<<"\nYour angle: "<<getdegree()<<char(248)<<getminute()<<"'"<<getdir();
		}
};
int main()
{
	angle a1;
	int a;
	float b;
	char c;
	char ch;
	do
	{
		cout<<"\nEnter degree: ";
		cin>>a;
		cout<<"\nEnter minute: ";
		cin>>b;
		
		do{			
			cout<<"\nEnter derection: ";
			cin>>c;
		}
		while(c!='e'&&c!='w'&&c!='n'&&c!='s');
		
		a1.set(a,b,c);
		a1.showdata();
		cout<<"\nPress Esc to exit, any key to continue.";
		ch=getch();
		
	}
	while(ch!=27);
	return 0;
}
