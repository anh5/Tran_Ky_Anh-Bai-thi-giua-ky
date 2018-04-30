#include<iostream>
using namespace std;

class numberseri{
	private:
	
	public:
			static int number;
		numberseri()
		{
				this->number++;
		}
		void dislay()
		{	
			cout << "\nSerial number:"<<this->number;
		}
	
};

int numberseri::number=0;
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
		void getdata()
		{
			int a;
			float b;
			char c;
			cout<<"\nEnter degree: ";
			cin>>a;
			cout<<"\nEnter minute: ";
			cin>>b;
			do{			
			cout<<"\nEnter derection(first letter): ";
			cin>>c;
		}
		while(c!='e'&&c!='w'&&c!='n'&&c!='s');
			set(a,b,c);
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
			cout<<"\nTheir angle: "<<getdegree()<<char(248)<<getminute()<<"'"<<getdir();
		}
};
class ship{
	private:
		angle position;
		
	public:
		numberseri number;
		void setdata()
		{
			position.getdata();			
		}
		void showdata()
		{
			position.showdata();
			number.dislay();
		}		
};
int main()
{
	ship s1;
	cout<<"\n----------THE FIRST SHIP---------------";
	s1.setdata();
	s1.showdata();
	ship s2;
	
	cout<<"\n----------THE SECOND SHIP---------------";
	s2.setdata();
	s2.showdata();
	ship s3;
	cout<<"\n----------THE THIRD ONE---------------";
	s3.setdata();
	s3.showdata();
	
	
	return 0;
}
