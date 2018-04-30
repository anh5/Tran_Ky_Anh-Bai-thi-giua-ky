#include<iostream>
#include<cmath>
using namespace std;

class fraction{
	private:
		int num;
		int den;
	public:
		fraction()
		{
			num=1;
			den=1;
		}
		void set(int tnum,int tden)
		{		
			num=tnum;
			den=tden;
		}
		
		void setdata()
		{
			int nemo,deno;
			char ch;
			cout<<"\nEnter a fraction: ";
			cin>>nemo>>ch>>deno;
			while(deno==0)
			{
				cout<<"\nIllegal fraction, enter again.";
				cout<<"\nEnter a fraction: ";
				cin>>nemo>>ch>>deno;
			}
			set(nemo,deno);
		}
		void lowterms()
		{
			long tnum, tden, temp, gcd;
			tnum = labs(num); 
			tden = labs(den); 
			if(tden==0){ 
				cout<< "Illegal fraction: division by 0"<<endl; 
				exit(1);
			}
			else if( tnum==0 ) { 
				num=0; den = 1; 
				return; 
			}
			while(tnum != 0){
				if(tnum < tden){ 	
				temp=tnum; tnum=tden; tden=temp;
				}
				tnum = tnum - tden;
			}
			gcd = tden;
			num = num / gcd;
			den = den / gcd; 
		}

		void sum(fraction one,fraction two)
		{
			this->num=two.den*one.num+two.num*one.den;
			this->den=one.den*two.den;
			this->lowterms();
		}
		void sub(fraction one,fraction two)
		{
			this->num=two.den*one.num-two.num*one.den;
			this->den=one.den*two.den;
			this->lowterms();
		}
		void mul(fraction one,fraction two)
		{
			this->num=two.num*one.num;
			this->den=one.den*two.den;
			this->lowterms();
		}
		void div(fraction one,fraction two)
		{
			this->num=one.num*one.den;
			this->den=one.den*two.num;
			this->lowterms();
		}
		void dislay()
		{
			cout<<num<<" / "<<den;
		}
};
int main()
{
	fraction ps1,ps2,ps3;
	ps1.setdata();
	cout<<"\nThe first fraction: ";
	ps1.dislay();
	cout<<endl;
	ps2.setdata();
	cout<<"\nThe second fraction: ";
	ps2.dislay();
	
	cout<<"\n------------RESULT-----------";
	ps3.sum(ps1,ps2);
	cout<<"\nSum = ";
	ps3.dislay();
	
	ps3.sub(ps1,ps2);
	cout<<"\nSub = ";
	ps3.dislay();
	
	ps3.mul(ps1,ps2);
	cout<<"\nMul = ";
	ps3.dislay();
	
	ps3.div(ps1,ps2);
	cout<<"\nDiv = ";
	ps3.dislay();
	return 0;
}

	













