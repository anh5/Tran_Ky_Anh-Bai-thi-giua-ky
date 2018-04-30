#include<iostream>
#include<conio.h>
using namespace std;
class  fraction{
	private:
		int numo,deno;
	public:
		fraction()
		{
			numo=0;
			deno=0;
		}
		void get(int a,int b)
		{
			numo=a;
			deno=b;
		}
		int getnumo()
		{
			return numo;
		}
		int getdeno()
		{
			return deno;
		}
		void getdata()
		{
			int a,b;
			char k;
			cout<<"\nEnter fraction: ";
			cin>>a>>k>>b;
			get(a,b);
		}
		int UCLN (int n,int m)
		{
			  while (n != 0 && m != 0)
			    if (n>m)
			      n -= m;
			    else
			      m -= n;
			  if (n == 0)
			    return m;
			  else
			    return n;
		}
		void add_fraction(fraction ps1,fraction ps2)
		{
			int ts,ms;
			if(ps1.getdeno()==ps2.getdeno())
			{
				ts=ps1.getnumo()+ps2.getnumo();
				ms=ps1.getdeno();				
			}
			else{
				ms=ps1.getdeno()*ps2.getdeno();
				ts=ps1.getnumo()*ps2.getdeno()+ps2.getnumo()*ps1.getdeno();				
			}
			
			int ucln=UCLN(ts,ms);
			ts=ts/ucln;
			ms=ms/ucln;
			get(ts,ms);
		}
		void showdata()
		{
			cout<<"\nFraction : "<<getnumo()<<"/"<<getdeno();
		}
		
		
};
int main()
{
	fraction f1,f2,f3;
	char ch;
	do{
		f1.getdata();
		f1.showdata();
		f2.getdata();
		f2.showdata();		
		cout<<"\nTheir sum: ";
		f3.add_fraction(f1,f2);
		f3.showdata();
		cout<<"\nPress any key to continue, Esc to exit.";
		ch=getch();
	}
	while(ch!=27);
	return 0;
}
