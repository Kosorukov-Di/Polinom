#include <Polinom.h>

void main()
{
	Polinom P;

	P.AddMonom(4,100);
	P.AddMonom(3,10);
	P.AddMonom(-2,1);

	P.Print();
	cout<<'='<<P.Exe();
	
	_getch();
}