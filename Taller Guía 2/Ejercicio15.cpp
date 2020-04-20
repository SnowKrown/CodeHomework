#include<iostream>

using namespace std;

int main()
{
	int cant, tot;
	cout<<"Ingrese la cantidad de copias a sacar: ";
	cin>>cant;
	tot = 100 * cant;
	
	if (cant >= 100 && cant <= 200)
		tot -= tot * 0.12;
	else if (cant > 200 && cant <= 400)
		tot -= tot * 0.15;
	else if (cant > 400)
		tot -= tot * 0.18;
		
	cout<<"El total a pagar es: "<<tot<<endl;
	
	system("pause");
}
