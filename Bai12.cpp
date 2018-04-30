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



class dislaytable{
	private: 
		int num;
	public:
		dislaytable()
		{
			num=1;
		}
		void add()
		{
			int tnum;
			do{
				cout<<"Input number: ";
				cin >> tnum;
				if(tnum!=0){
					this->num=tnum;
					break;
				}
				cout<< "Illegal fraction: division by 0"<<endl;
			}while(1);
		}
		void dislay()
		{
			fraction temp1;
			temp1.set(1,this->num);
			fraction temp2;
			temp2.set(1,this->num);
			cout<<"\t";
			for(int i=1; i <this->num;i++){
				temp1.set(i,num);
				temp1.lowterms();
				temp1.dislay();
				cout<<"\t";
			}
			cout<<endl<<"---------------------------------------------"<<endl;
			for(int i=1; i <this->num;i++){
				temp1.set(i,num);
				temp1.lowterms();
				temp1.dislay();
				cout<<"\t";
				for(int j=1;j <this->num;j++){
					temp1.set(i,num);
					temp2.set(j,num);				
					temp1.mul(temp1,temp2);
					temp1.dislay();
					cout<<"\t";
				}
				cout<<endl;
			}
		}
	};

int main()
{
	dislaytable ps1;
	ps1.add();
	ps1.dislay();
	return 0;
}

