#include <stdio.h>
#include <conio.h>
#include <math.h>
main()
{
int b500 = 0;
int b200 = 0;
int b100 = 0;
int b50 = 0;
int b20 = 0;
int b10 = 0;
int b5 = 0;
int b1 = 0;
float Q = 0;
int m50 = 0;
int m25 = 0;
int m10 = 0;
int m5 = 0;
float m1 = 0;
	do
	{
	printf("Introduzca cantidad: ");
	scanf("%f", &Q);
	if (Q >= 500)
	{
		b500 = Q/500;
		Q = (fmod(Q,500));
	}
	else b500=0;
	if ( Q >= 200 )
		{
			b200 = Q/200;
			Q = (fmod(Q,200));
		}
	else b200=0;
	if ( Q >= 100 )
		{
			b100 =Q/100;
			Q = (fmod(Q,100));
		}
	else b100 = 0;
	if ( Q >= 50 )
		{
			b50 = Q/50;
			Q = (fmod(Q,50));
		}
	else b50=0;
	if ( Q >= 20 )
		{
			b20 = Q/20;
			Q = (fmod(Q,20));
		}
	else b20=0;
	if (Q >= 10)
		{
			b10 = Q/10;
			Q = (fmod(Q,10));
		}
	else b10 = 0;
	if (Q >= 5)
		{
			b5 = Q/5;
			Q = (fmod(Q,5));
		}
	else b5 = 0;
	if (Q >= 1)
		{
			b1 = Q/1;
			Q = (fmod(Q,1));
		}
	else b1 = 0;
	if (Q >= 0.50)
		{
			m50 = Q/0.50;
			Q = (fmod(Q,0.50));

		}
	else m50 = 0;
	if (Q >= 0.25)
		{
			m25 = Q/0.25;
			Q = (fmod(Q,0.25));
		}
	else m25 = 0;
	if (Q >= 0.10)
		{
			m10 = Q/0.10;
			Q = (fmod(Q,0.10));
		}
	else m10 = 0;
	if (Q >= 0.05)
		{
			m5 = Q/0.05;
			Q = (fmod(Q,0.05));
		}
	else m5 = 0;
	if (Q >= 0.01)
		{
			m1 = Q/0.01;
			Q = (fmod(Q,0.05));
		}
	else m1 = 0;
	}
	while (Q < 0);
printf("\nbilletes de 500 = %i",b500 );
printf("\nbilletes de 200 = %i",b200 );
printf("\nbilletes de 100 = %i", b100);
printf("\nbilletes de 50 = %i", b50);
printf("\nbilletes de 20 = %i", b20);
printf("\nbilletes de 10 = %i", b10);
printf("\nbilletes de 5 = %i", b5);
printf("\nbilletes de 1 = %i", b1);
printf("\nmonedas de 0.50 = %.f",(float)m50);
printf("\nmonedas de 0.25 = %.f", (float)m25);
printf("\nmonedas de 0.10 = %.f", (float)m10);
printf("\nmonedas de 0.05 = %.f", (float) m5);
printf("\nmonedas de 0.01 = %.f", m1);
_getch();
}
