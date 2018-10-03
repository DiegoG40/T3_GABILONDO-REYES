#include <iostream>
#include <cstdlib>

using namespace std;
int main()
{
	float pago_total, litros, gasto1, gasto2, cuota_mensual;
	while (1)
	{
		system("cls");
		
	cout<<"Introduzca cuota mensual: ";
	cin>>cuota_mensual;
	cout<<"Introduzca los litros gastados: ";
	cin>>litros;
	if(litros<=50)
	{
		gasto1=0;
		
	}
	else if (litros>50 && litros <200)
	{
		gasto1= litros*3;
		gasto2=0;
	}
	else if(litros>=200)
	{
		gasto1=litros*5;
		
	}
	pago_total=cuota_mensual+gasto1+gasto2;
	cout<<"El total a pagar sera: "<<pago_total<<" pesos"<<endl;
	system("pause");
	}
	return 0;
}
