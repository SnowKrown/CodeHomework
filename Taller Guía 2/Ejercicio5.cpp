#include<iostream>

using namespace std;

int main()
{
	float a, b = 0;
	
	cout<<"Ingrese el numero a dividir: ";
	cin>>a;
	
	while (b == 0)
	{
		cout<<"Ingrese el divisor: ";
		cin>>b;
		
		if (b == 0)
			cout<<"El divisor no puede ser cero."<<endl<<endl;
	}
	
	cout<<"El resultado de dividir "<<a<<" entre "<<b<<" es: "<<(a/b)<<endl;
	
	system("pause");
}
