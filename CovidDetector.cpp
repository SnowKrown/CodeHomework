using namespace std;
#include<iostream>

int main()
{
	float temp;
	cout<<"Ingreso a la camara detectora del segundo sintoma de COVID-19"<<endl<<endl;	
	cout<<"Por favor ingrese su temperatura, recuerde que puede usar decimales: ";
	cin>>temp;
	cout<<endl;
	
	if (temp <= 37.5)
		cout<<"Su temperatura es normal."<<endl<<"Cuidese!"<<endl<<"#QuedateEnCasa";
	else
		cout<<"Su temperatura indica que tiene uno de los sintomas del virus."<<endl<<"Solicite un chequeo medico llamando a la linea 192 (Linea de atencion Corona Virus Min. Salud)";
	
	cout<<endl;	
	return 0;
}
