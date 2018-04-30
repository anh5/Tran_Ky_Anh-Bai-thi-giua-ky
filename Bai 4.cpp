#include<iostream>
using namespace std;

class employee{
	private:
		int num;
		float comp;
	public:
		void set(int a,float b)
		{
			num=a;
			comp=b;
		}
		void setdata()
		{
			int a;
			float b;
			cout<<"\nEnter number of employee: ";
			cin>>a;
			cout<<"\nEnter compensation: ";
			cin>>b;
			set(a,b);
		}
		int getnum()
		{
			return num;
		}
		float getcomp()
		{
			return comp;
		}
		void getdata()
		{
			cout<<"\nEmployee's number: "<<getnum();
			cout<<"\nCompensation: "<<getcomp();
		}
		
};
int main()
{
	employee em;
	em.setdata();
	em.getdata();
	return 0;
}
