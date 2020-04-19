#include<iostream>

using namespace std;

int main()
{
	float f = 0;
	
	while (f != 999)
	{
		cout<<"Ingrese la temperatura en Fahrenheit: ";
		cin>>f;
		cout<<f<<" Fahrenheit equivale a "<<(f - 32) * 5 / 9<<" grados Celsius."<<endl<<endl;
	}
}
