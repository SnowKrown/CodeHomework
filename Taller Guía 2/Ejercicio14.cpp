#include<iostream>

using namespace std;

int main()
{
	int h, m, n;
	
	cout<<"Ingrese la cantidad de hombres: ";
	cin>>h;
	cout<<"Ingrese la cantidad de mujeres: ";
	cin>>m;
	cout<<"Ingrese la cantidad de ninos: ";
	cin>>n;
	
	float t, hPct, mPct, nPct;
	t = (h + m + n);
	hPct = (h / t) * 100;
	mPct = (m / t) * 100;
	nPct = (n / t) * 100;
	
	cout<<"El porcentaje de personas es:"<<endl<<"Hombres: "<<hPct<<"%"<<endl<<"Mujeres: "<<mPct<<"%"<<endl<<"Ninos: "<<nPct<<"%"<<endl;
	
	system("pause");
}
