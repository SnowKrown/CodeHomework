#include<iostream>

using namespace std;

int getDiscount (int value, int category);

int main()
{
	string nombre;
	int tipo, escoCant, recoCant, aromCant;
	
	cout<<"Ingrese el nombre del cliente: ";
	cin>>nombre;
	
	while (tipo < 1 || tipo > 4)
	{
		cout<<"Ingrese el tipo de cliente (1 - 4): ";
		cin>>tipo;
		
		if (tipo < 1 || tipo > 4)
			cout<<"El tipo de cliente "<<tipo<<" es invalido."<<endl<<endl;
	}
	
	cout<<"Ingrese la cantidad de escobas a comprar: ";
	cin>>escoCant;
	
	cout<<"Ingrese la cantidad de recogedores a comprar: ";
	cin>>recoCant;
	
	cout<<"Ingrese la cantidad de aromatizantes a comprar: ";
	cin>>aromCant;
	
	int subTot, desc, total;
	
	subTot = (2500 * escoCant) + (3000 * recoCant) + (5000 * aromCant);
	desc = getDiscount(subTot, tipo);
	total = subTot - desc;
	
	cout<<endl<<endl;
	cout<<"-----------------------------------------------------------------"<<endl;
	cout<<"Factura Poncha"<<endl<<endl;
	cout<<"Nombre: "<<nombre<<endl;
	cout<<"Subtotal productos: "<<subTot<<endl;
	cout<<"Descuento por categoria: "<<desc<<endl;
	cout<<"Total a pagar: "<<total<<endl;
	cout<<"-----------------------------------------------------------------"<<endl;
}

int getDiscount (int value, int category)
{
	switch (category)
	{
		case 1: return value * 0.05;
		case 2: return value * 0.08;
		case 3: return value * 0.12;
		case 4: return value * 0.15;
		default: return 0;
	}
}

