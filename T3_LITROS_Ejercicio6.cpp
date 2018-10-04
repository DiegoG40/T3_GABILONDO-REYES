#include <iostream>
#include <cstdlib>

using namespace std;
int main()
{
	float pago_total, litros, gasto1, gasto2;
	while (1)
	{
		system("cls");
		
	cout<<"Introduzca los litros gastados: ";
	cin>>litros;
	if(litros<=50)
	{
		gasto1=150;
		gasto2=0;
	}
	else if (litros>50 && litros <=200)
	{
		gasto1= 150+(litros-50)*3;
		gasto2=0;
	}
	else if(litros>200)
	{
		gasto2=600+(litros-200)*5;
	}
	pago_total=gasto1+gasto2;
	cout<<"El total a pagar sera: "<<pago_total<<" pesos"<<endl;
	system("pause");
	}
	return 0;
}
