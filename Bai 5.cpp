#include<iostream>
using namespace std;
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
			cout<<"\nEnter a date(mm/dd/yy): ";
			cin>>a>>ch1>>b>>ch2>>c;
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
			cout<<"\nDate is: "<<getmonth()<<"/"<<getday()<<"/"<<getyear();
		}
};
int main()
{
	date d1;
	d1.getdate();
	d1.showdate();
	return 0;
}
