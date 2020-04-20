#include<iostream>

using namespace std;

char* getMonthName(int month);
int getMonthDays(int month);

int main()
{
	int m;
	cout<<"Ingrese el mes: ";
	cin>>m;
	
	if (m >= 1 && m <= 12)
		cout<<"El mes de "<<getMonthName(m)<<" tiene "<<getMonthDays(m)<<" dias."<<endl;
	else
		cout<<"El mes "<<m<<" no es valido."<<endl;
	system("pause");
}

char* getMonthName(int month)
{
	switch(month)
	{
		case 1: return "Enero";
		case 2: return "Febrero";
		case 3: return "Marzo";
		case 4: return "Abril";
		case 5: return "Mayo"; 
		case 6: return "Junio";
		case 7: return "Julio";
		case 8: return "Agosto";
		case 9: return "Septiembre";
		case 10: return "Octubre";
		case 11: return "Noviembre";
		case 12: return "Diciembre";
		default: return "Mes invalido";
	}
}

int getMonthDays(int month)
{
	switch(month)
	{
		case 1: case 3: case 5: case 7: case 8: case 10: case 12: return 31;
		case 4: case 6: case 9: case 11: return 30;
		default: return 28;
	}
}

