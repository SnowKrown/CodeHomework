#include<iostream>

using namespace std;

char* getDayNumber(int day);

int main()
{
	int day;
	
	while (day < 1 || day > 7)
	{
		cout<<"Escriba el dia (del 1 al 7): ";
		cin>>day;
		
		if (day > 0 && day < 8)
			cout<<"El dia es "<<getDayNumber(day);
		else
			cout<<"El dia "<<day<<" es invalido."<<endl<<endl;
	}
	
	system("pause");
}

char* getDayNumber(int day)
{
	switch(day)
	{
		case 1: return "Lunes";
		case 2: return "Martes";
		case 3: return "Miercoles";
		case 4: return "Jueves";
		case 5: return "Viernes";
		case 6: return "Sabado";
		default: return "Domingo";
	}
}
