#include<iostream>
using namespace std;

class Int{
	private:
		int x;
	public:
		Int()
		{
			x=0;
		}
		void set(int a)
		{
			x=a;
		}
		int get()
		{
			return x;
		}
		void setdata()
		{
			int a;
			cout<<"\nEnter a number: ";
			cin>>a;
			set(a);			
		}
		void add(int a,int b)
		{
			int c=a+b;
			set(c);
		}
};
int main()
{
	Int a,b,c;
	a.setdata();
	b.setdata();
	c.add(a.get(),b.get());
	cout<<"\nTong la: "<<c.get();
	return 0;
}
