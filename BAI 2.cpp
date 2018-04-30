#include<iostream>
#include<conio.h>
using namespace std;

class tollBooth{
	private:
	 	unsigned int numcar;
	 	double totalcash;
	public:
		tollBooth()
		{
			numcar=0;
			totalcash=0;
		}
		void payingcar()
		{
			numcar++;
			totalcash=totalcash+0.5;
		}
		void nopayingcar()
		{
			numcar++;
		}
		unsigned int getnumcar()
		{
			return numcar;
		}
		double gettotal()
		{
			return totalcash;
		}
};
int main()
{
	tollBooth bot;
	char key;
	cout<<"\nP: paying car\nN:no paying car\nESC:exit";
	cout<<"\nLet's press a key:";
	do{	
		key=getch();
		if(key==0) key=getch();
		if(key=='p')
		{
			cout<<"\nAn car have just paid fee";
			bot.payingcar();
		}
		if(key=='n')
		{
			cout<<"\nAn car haven't paid fee";
			bot.nopayingcar();
		}
		if(key==27)
		{
			cout<<"\nExited";
			cout<<"\nTotal car: "<<bot.getnumcar();
			cout<<"\nTotal cash: "<<bot.gettotal();
		}
	}
	while(key!=27);
	return 0;
}
