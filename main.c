
#include <REGX52.H>


void Delay(unsigned int xms)	//@12.000MHz
{
	while(xms)
	{
		unsigned char data i, j;

		i = 2;
		j = 239;
		do
		{
			while (--j);
		} while (--i);
		xms--;
	}
}


void main()
{
	while(P3_1 == 1)
	{
		P2_0 == 1;
		
	}
	while(1)
	{
		if(P3_1 == 0);
		{
			Delay(20);
			while(P3_1 == 0);
			Delay(20);
			
			P2_0 = ~P2_0;
			
		}
	}
}