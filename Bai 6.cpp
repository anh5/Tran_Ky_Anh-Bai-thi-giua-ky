#include<iostream>
using namespace std;

//enum typeemployee{
//	 laborer=108,
//	 secretary=115,
//	 manager=109,
//	accountant=97, 
//	executive=101, 
//	researcher=114,
//	employee=101
//};
class date{
	private:
		int day,month,year;
	public:
		void get(int a,int b,int c)
		{
			day=a;
			month=b;
			year=c;
		}
		void getdate()
		{
			int a,b,c;
			char ch1,ch2;	
			cout<<"\nEnter date which employee hired(mm/dd/yy): ";
			cin>>b>>ch1>>a>>ch2>>c;
			get(b,a,c);	
			
		}
		int getday()
		{
			return day;	
		}
		int getmonth()
		{
			return month;
		}
		int getyear()
		{
			return year;
		}
		void showdate()
		{
			cout<<"\nHired Date : "<<getmonth()<<"/"<<getday()<<"/"<<getyear();
		}
	};
class employee{
	private:
		int num;
		float comp;
		date firstdate;
		string type;
	public:
		employee()
		{
			type="employee";
		}
		void set(int a,float b)
		{
			num=a;
			comp=b;
		}
		void settype(char ch)
		{
			if(ch==108) type="laborer";
			if(ch==115) type="secretary";
			if(ch==109) type="manager";
			if(ch==97) type="accountant"; 
			if(ch==101) type="executive"; 
			if(ch==114) type="researcher";
		}
		void setdata()
		{
			int a;
			char ch;
			float b;
			cout<<"\nEnter number of employee: ";
			cin>>a;
			cout<<"\nEnter type of employee(only first letter): ";
			cin>>ch;
			settype(ch);
			cout<<"\nEnter compensation: ";
			cin>>b;
			set(a,b);
			firstdate.getdate();
		}
		string gettype()
		{
			return type;
		}
		int getnum()
		{
			return num;
		}
		float getcomp()
		{
			return comp;
		}
		void showdata()
		{
			cout<<"\nEmployee's number: "<<getnum();
			cout<<"\nCompensation: "<<getcomp();
			cout<<"\nType: "<<gettype();
			firstdate.showdate();
		}
	};
	int main()
	{
		employee per[3];
		employee emp;
		emp.setdata();
		emp.showdata();
		//cout<<"\nEnter infomation for employees: ";
//		for(int i=0;i<3;i++)
//		{			
//			per[i].setdata();
//		}
//		cout<<"\nEmployee's Infomation:";
//		for(int i=0;i<3;i++)
//		{
//			per[i].showdata();
//			cout<<endl;
//		}
		return 0;
	}
