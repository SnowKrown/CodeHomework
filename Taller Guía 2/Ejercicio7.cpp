#include<iostream>

using namespace std;

int main()
{	
	int broPre, broCant, rollPre, rollCant, sellPre, sellCant;
	
	cout<<"Ingrese el precio unitario de la brocha: ";
	cin>>broPre;
	cout<<"Ingrese la cantidad de brochas a comprar: ";
	cin>>broCant;
	cout<<endl;
	
	cout<<"Ingrese el precio unitario del rodillo: ";
	cin>>rollPre;
	cout<<"Ingrese la cantidad de rodillos a comprar: ";
	cin>>rollCant;
	cout<<endl;
	
	cout<<"Ingrese el precio unitario del sellador: ";
	cin>>sellPre;
	cout<<"Ingrese la cantidad de sellador a comprar: ";
	cin>>sellCant;
	cout<<endl;
	
	int broRes, rollRes, sellRes;
	broRes = broPre * broCant;
	broRes -= broRes * 0.2;
	
	rollRes = rollPre * rollCant;
	rollRes -= rollRes * 0.15;
	
	sellRes = sellPre * sellCant;
	
	int totalNorm, totalCont;
	totalNorm = (broRes + rollRes + sellRes);
	totalCont = totalNorm - (totalNorm * 0.07);
	
	cout<<endl;
	cout<<"-------------------------------------------------------------"<<endl;
	cout<<"Brochas: "<<broCant<<", Unidad: "<<broPre<<", Total: "<<broRes<<" - 20% de descuento"<<endl;
	cout<<"Rodillos: "<<rollCant<<", Unidad: "<<rollPre<<", Total: "<<rollRes<<" - 10% de descuento"<<endl;
	cout<<"Sellador: "<<sellCant<<", Unidad: "<<sellPre<<", Total: "<<sellRes<<endl;
	cout<<endl;
	cout<<"Total a pagar a credito: "<<totalNorm<<endl;
	cout<<"Total a pagar de contado: "<<totalCont<<endl;
	cout<<"-------------------------------------------------------------"<<endl;
	
	
	system("pause");
}
