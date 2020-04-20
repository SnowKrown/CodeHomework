#include<iostream>

using namespace std;
float getResult(float a, float b, int operation);

int main()
{
	float a, b; 
	int opt;
	cout<<"Ingrese el primer numero: ";
	cin>>a;
	cout<<"Ingrese el segundo numero: ";
	cin>>b;
	cout<<endl<<endl;
	cout<<"MENU"<<endl<<"1. Sumar"<<endl<<"2. Restar"<<endl<<"3. Multiplicar"<<endl<<"4. Dividir"<<endl;
	
	cout<<"Elija la opcion deseada: ";
	cin>>opt;
	
	if (opt < 1 || opt > 4)
		cout<<"La opcion escogida no es valida."<<endl<<endl;
	else
		cout<<"El resultado de la operacion es: "<<getResult(a, b, opt)<<endl<<endl;
		
	system("pause");
}

float getResult(float a, float b, int operation)
{
	switch(operation)
	{
		case 1: return a + b;
		case 2: return a - b;
		case 3: return a * b;
		case 4: return a / b;
		default: return 0;
	}
}
