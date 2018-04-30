#include<iostream>
#include<cmath>
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
			cout << this->number;
		}
	
};

int numberseri::number=0;

int main(){
	numberseri x;
	x.dislay();
	cout <<endl;
	numberseri y;
	y.dislay();
	numberseri z;
	z.dislay();
	numberseri u;
	u.dislay();	
	numberseri v;	
	z.dislay();
	system("pause");
	return 0;
}
